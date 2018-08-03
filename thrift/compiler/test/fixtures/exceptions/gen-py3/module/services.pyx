#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext, pass_context
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit
)
from thrift.py3.types cimport move

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as __iobuf
import folly.iobuf as __iobuf
from folly.iobuf cimport move as move_iobuf

cimport module.types as _module_types
import module.types as _module_types

import asyncio
import functools
import sys
import traceback
import types as _py_types

from module.services_wrapper cimport cRaiserInterface


cdef extern from "<utility>" namespace "std":
    cdef cFollyPromise[cFollyUnit] move_promise_cFollyUnit "std::move"(
        cFollyPromise[cFollyUnit])
    cdef cFollyPromise[unique_ptr[string]] move_promise_string "std::move"(
        cFollyPromise[unique_ptr[string]])

cdef class Promise_cFollyUnit:
    cdef cFollyPromise[cFollyUnit] cPromise

    @staticmethod
    cdef create(cFollyPromise[cFollyUnit] cPromise):
        inst = <Promise_cFollyUnit>Promise_cFollyUnit.__new__(Promise_cFollyUnit)
        inst.cPromise = move_promise_cFollyUnit(cPromise)
        return inst

cdef class Promise_string:
    cdef cFollyPromise[unique_ptr[string]] cPromise

    @staticmethod
    cdef create(cFollyPromise[unique_ptr[string]] cPromise):
        inst = <Promise_string>Promise_string.__new__(Promise_string)
        inst.cPromise = move_promise_string(cPromise)
        return inst

cdef object _Raiser_annotations = _py_types.MappingProxyType({
})


cdef class RaiserInterface(
    ServiceInterface
):
    annotations = _Raiser_annotations

    def __cinit__(self):
        self.interface_wrapper = cRaiserInterface(
            <PyObject *> self,
            get_executor()
        )

    @staticmethod
    def pass_context_doBland(fn):
        return pass_context(fn)

    async def doBland(
            self):
        raise NotImplementedError("async def doBland is not implemented")

    @staticmethod
    def pass_context_doRaise(fn):
        return pass_context(fn)

    async def doRaise(
            self):
        raise NotImplementedError("async def doRaise is not implemented")

    @staticmethod
    def pass_context_get200(fn):
        return pass_context(fn)

    async def get200(
            self):
        raise NotImplementedError("async def get200 is not implemented")

    @staticmethod
    def pass_context_get500(fn):
        return pass_context(fn)

    async def get500(
            self):
        raise NotImplementedError("async def get500 is not implemented")


cdef api void call_cy_Raiser_doBland(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef RaiserInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    __context = None
    if __iface._pass_context_doBland:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        Raiser_doBland_coro(
            self,
            __context,
            __promise
        )
    )

async def Raiser_doBland_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise
):
    try:
        if ctx is not None:
            result = await self.doBland(ctx,)
        else:
            result = await self.doBland()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler doBland:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_Raiser_doRaise(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef RaiserInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    __context = None
    if __iface._pass_context_doRaise:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        Raiser_doRaise_coro(
            self,
            __context,
            __promise
        )
    )

async def Raiser_doRaise_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise
):
    try:
        if ctx is not None:
            result = await self.doRaise(ctx,)
        else:
            result = await self.doRaise()
    except _module_types.Banal as ex:
        promise.cPromise.setException(deref((<_module_types.Banal> ex)._cpp_obj.get()))
    except _module_types.Fiery as ex:
        promise.cPromise.setException(deref((<_module_types.Fiery> ex)._cpp_obj.get()))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler doRaise:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_Raiser_get200(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[string]] cPromise
):
    cdef RaiserInterface __iface
    __iface = self
    __promise = Promise_string.create(move_promise_string(cPromise))
    __context = None
    if __iface._pass_context_get200:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        Raiser_get200_coro(
            self,
            __context,
            __promise
        )
    )

async def Raiser_get200_coro(
    object self,
    object ctx,
    Promise_string promise
):
    try:
        if ctx is not None:
            result = await self.get200(ctx,)
        else:
            result = await self.get200()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler get200:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[string](<string?> result.encode('UTF-8')))

cdef api void call_cy_Raiser_get500(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[string]] cPromise
):
    cdef RaiserInterface __iface
    __iface = self
    __promise = Promise_string.create(move_promise_string(cPromise))
    __context = None
    if __iface._pass_context_get500:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        Raiser_get500_coro(
            self,
            __context,
            __promise
        )
    )

async def Raiser_get500_coro(
    object self,
    object ctx,
    Promise_string promise
):
    try:
        if ctx is not None:
            result = await self.get500(ctx,)
        else:
            result = await self.get500()
    except _module_types.Fiery as ex:
        promise.cPromise.setException(deref((<_module_types.Fiery> ex)._cpp_obj.get()))
    except _module_types.Banal as ex:
        promise.cPromise.setException(deref((<_module_types.Banal> ex)._cpp_obj.get()))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler get500:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[string](<string?> result.encode('UTF-8')))

