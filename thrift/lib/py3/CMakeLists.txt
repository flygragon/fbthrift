# Create tree of symbolic links in structure required for successful
# compliation by Cython.
#   - must be in path named same as extension


# Arguments:
#   name of the extension - e.g. thrift
#   sources...


function (create_cybld_tree _extname _tre)
  file(MAKE_DIRECTORY "cybld/${_tre}")
  set(_linked_files)
  foreach (_src ${ARGN})
    add_custom_command(OUTPUT "cybld/${_tre}/${_src}"
      COMMAND ${CMAKE_COMMAND} -E create_symlink
        ${CMAKE_CURRENT_SOURCE_DIR}/${_src}
        "cybld/${_tre}/${_src}"
      COMMENT "Generating symlink to ${_cxx}"
    )
    list(APPEND _linked_files "cybld/${_tre}/${_src}")
  endforeach ()
  add_custom_target(${_extname}-symlinks DEPENDS ${_linked_files})
endfunction ()


create_cybld_tree(folly folly
                        iobuf.pxd
                        iobuf.pyx
                        optional.pxd )

create_cybld_tree(thrift thrift/py3
                         __init__.py
                         client.pxd
                         client.pyx
                         server.pxd
                         server.pyx
                         common.pxd
                         common.pyx
                         std_libcpp.pxd
                         exceptions.pxd
                         exceptions.pyx
                         types.pxd
                         types.pyx
                         serializer.pxd
                         serializer.pyx)

file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/cybld/thrift/__init__.pxd)
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/cybld/folly/__init__.pyx)

# Shared library targets for each Cython module, to avoid conficts targets
# named <dir>-<dir>-<module>-py3

set(cpp_tgts
  "folly/iobuf.cpp"
  "thrift/py3/common.cpp"
  "thrift/py3/types.cpp"
  "thrift/py3/exceptions.cpp"
  "thrift/py3/serializer.cpp"
  "thrift/py3/client.cpp"
  "thrift/py3/server.cpp"
)
foreach(_mod ${cpp_tgts})
  get_filename_component(_f ${_mod} NAME_WE)
  get_filename_component(_d ${_mod} DIRECTORY)
  set(_pyx "cybld/${_d}/${_f}.pyx")
  set(_cxx "cybld/${_d}/${_f}.cpp")
  string(REPLACE "/" "-" _module_name "${_d}/${_f}-py3")
  message(STATUS "Create Cython module ${_module_name} from ${_f}.pyx")

  set_source_files_properties(${_cxx} PROPERTIES GENERATED TRUE)

  add_custom_command(OUTPUT ${_cxx}
    COMMAND ${CYTHON_EXE} --fast-fail -3 --cplus ${_pyx} -o ${_cxx}
    COMMENT "Generating ${_cxx} using Cython"
    DEPENDS folly-symlinks thrift-symlinks
  )

  python_add_module(${_module_name} "${_cxx}")
  target_link_libraries(${_module_name} thriftcpp2_shared)
  set_target_properties(${_module_name}
    PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "cybld/${_d}"
    LIBRARY_OUTPUT_NAME ${_f}
  )
endforeach()

include_directories(${PYTHON_INCLUDE_DIRS})

# Install Folly Python Bindings using Python setuptools
install(CODE "
  execute_process(COMMAND
  python3 ${CMAKE_CURRENT_SOURCE_DIR}/setup.py install
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/cybld)")

add_subdirectory(test)
