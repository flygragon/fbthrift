#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as __iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport bstring, move
from folly.optional cimport cOptional


cdef extern from "src/gen-cpp2/module_types.h" namespace "cpp2":
    cdef cppclass cMyEnum "cpp2::MyEnum":
        bint operator==(cMyEnum&)
    cMyEnum MyEnum__MyValue1 "cpp2::MyEnum::MyValue1"
    cMyEnum MyEnum__MyValue2 "cpp2::MyEnum::MyValue2"




cdef class MyEnum(thrift.py3.types.CompiledEnum):
    pass


cdef cMyEnum MyEnum_to_cpp(MyEnum value)



cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "cpp2":
    # Forward Declaration
    cdef cppclass cMyStruct "cpp2::MyStruct"
    # Forward Declaration
    cdef cppclass cMyDataItem "cpp2::MyDataItem"

cdef extern from "src/gen-cpp2/module_types.h" namespace "cpp2":
    cdef cppclass cMyStruct__isset "cpp2::MyStruct::__isset":
        bint MyIntField
        bint MyStringField
        bint MyDataField
        bint major
        bint myEnum

    cdef cppclass cMyStruct "cpp2::MyStruct":
        cMyStruct() except +
        cMyStruct(const cMyStruct&) except +
        bint operator==(cMyStruct&)
        int64_t MyIntField
        string MyStringField
        cMyDataItem MyDataField
        int64_t major
        cMyEnum myEnum
        cMyStruct__isset __isset

    cdef cppclass cMyDataItem__isset "cpp2::MyDataItem::__isset":
        pass

    cdef cppclass cMyDataItem "cpp2::MyDataItem":
        cMyDataItem() except +
        cMyDataItem(const cMyDataItem&) except +
        bint operator==(cMyDataItem&)
        cMyDataItem__isset __isset


cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cMyStruct] move(unique_ptr[cMyStruct])
    cdef shared_ptr[cMyStruct] move_shared "std::move"(shared_ptr[cMyStruct])
    cdef unique_ptr[cMyStruct] move_unique "std::move"(unique_ptr[cMyStruct])
    cdef shared_ptr[cMyDataItem] move(unique_ptr[cMyDataItem])
    cdef shared_ptr[cMyDataItem] move_shared "std::move"(shared_ptr[cMyDataItem])
    cdef unique_ptr[cMyDataItem] move_unique "std::move"(unique_ptr[cMyDataItem])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cMyStruct] const_pointer_cast "std::const_pointer_cast<const cpp2::MyStruct>"(shared_ptr[cMyStruct])
    cdef shared_ptr[const cMyDataItem] const_pointer_cast "std::const_pointer_cast<const cpp2::MyDataItem>"(shared_ptr[cMyDataItem])

# Forward Definition of the cython struct
cdef class MyStruct(thrift.py3.types.Struct)


cdef class MyStruct(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cMyStruct] _cpp_obj
    cdef MyDataItem __MyDataField

    @staticmethod
    cdef unique_ptr[cMyStruct] _make_instance(
        cMyStruct* base_instance,
        object MyIntField,
        object MyStringField,
        object MyDataField,
        object major,
        object myEnum
    ) except *

    @staticmethod
    cdef create(shared_ptr[cMyStruct])

# Forward Definition of the cython struct
cdef class MyDataItem(thrift.py3.types.Struct)


cdef class MyDataItem(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cMyDataItem] _cpp_obj

    @staticmethod
    cdef unique_ptr[cMyDataItem] _make_instance(
        cMyDataItem* base_instance
    ) except *

    @staticmethod
    cdef create(shared_ptr[cMyDataItem])




