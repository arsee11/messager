// **********************************************************************
//
// Copyright (c) 2003-2017 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.7.0
//
// <auto-generated>
//
// Generated from file `messager.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <messager.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ValueFactory.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/InputStream.h>
#include <Ice/OutputStream.h>
#include <IceUtil/PopDisableWarnings.h>

#if defined(_MSC_VER)
#   pragma warning(disable:4458) // declaration of ... hides class member
#elif defined(__clang__)
#   pragma clang diagnostic ignored "-Wshadow"
#elif defined(__GNUC__)
#   pragma GCC diagnostic ignored "-Wshadow"
#endif

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace
{

const ::std::string iceC_Messager_Receiver_ids[2] =
{
    "::Ice::Object",
    "::Messager::Receiver"
};
const ::std::string iceC_Messager_Receiver_ops[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "onRecv"
};
const ::std::string iceC_Messager_Receiver_onRecv_name = "onRecv";

const ::std::string iceC_Messager_Box_ids[2] =
{
    "::Ice::Object",
    "::Messager::Box"
};
const ::std::string iceC_Messager_Box_ops[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "post",
    "pull",
    "setReceiver",
    "setReceiverId"
};
const ::std::string iceC_Messager_Box_post_name = "post";
const ::std::string iceC_Messager_Box_pull_name = "pull";
const ::std::string iceC_Messager_Box_setReceiver_name = "setReceiver";
const ::std::string iceC_Messager_Box_setReceiverId_name = "setReceiverId";

const ::std::string iceC_Messager_Deliver_ids[2] =
{
    "::Ice::Object",
    "::Messager::Deliver"
};
const ::std::string iceC_Messager_Deliver_ops[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "registerBox"
};
const ::std::string iceC_Messager_Deliver_registerBox_name = "registerBox";

}

bool
Messager::Receiver::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_Messager_Receiver_ids, iceC_Messager_Receiver_ids + 2, s);
}

::std::vector<::std::string>
Messager::Receiver::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_Messager_Receiver_ids[0], &iceC_Messager_Receiver_ids[2]);
}

::std::string
Messager::Receiver::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
Messager::Receiver::ice_staticId()
{
    static const ::std::string typeId = "::Messager::Receiver";
    return typeId;
}

bool
Messager::Receiver::_iceD_onRecv(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::Messager::Message iceP_msg;
    istr->readAll(iceP_msg);
    inS.endReadParams();
    this->onRecv(::std::move(iceP_msg), current);
    inS.writeEmptyParams();
    return true;
}

bool
Messager::Receiver::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Messager_Receiver_ops, iceC_Messager_Receiver_ops + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_Messager_Receiver_ops)
    {
        case 0:
        {
            return _iceD_ice_id(in, current);
        }
        case 1:
        {
            return _iceD_ice_ids(in, current);
        }
        case 2:
        {
            return _iceD_ice_isA(in, current);
        }
        case 3:
        {
            return _iceD_ice_ping(in, current);
        }
        case 4:
        {
            return _iceD_onRecv(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

bool
Messager::Box::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_Messager_Box_ids, iceC_Messager_Box_ids + 2, s);
}

::std::vector<::std::string>
Messager::Box::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_Messager_Box_ids[0], &iceC_Messager_Box_ids[2]);
}

::std::string
Messager::Box::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
Messager::Box::ice_staticId()
{
    static const ::std::string typeId = "::Messager::Box";
    return typeId;
}

bool
Messager::Box::_iceD_post(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::Messager::Message iceP_msg;
    istr->readAll(iceP_msg);
    inS.endReadParams();
    bool ret = this->post(::std::move(iceP_msg), current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}

bool
Messager::Box::_iceD_pull(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    inS.readEmptyParams();
    this->pull(current);
    inS.writeEmptyParams();
    return true;
}

bool
Messager::Box::_iceD_setReceiver(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::shared_ptr<::Messager::ReceiverPrx> iceP_val;
    istr->readAll(iceP_val);
    inS.endReadParams();
    this->setReceiver(::std::move(iceP_val), current);
    inS.writeEmptyParams();
    return true;
}

bool
Messager::Box::_iceD_setReceiverId(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::Ice::Identity iceP_recvid;
    istr->readAll(iceP_recvid);
    inS.endReadParams();
    this->setReceiverId(::std::move(iceP_recvid), current);
    inS.writeEmptyParams();
    return true;
}

bool
Messager::Box::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Messager_Box_ops, iceC_Messager_Box_ops + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_Messager_Box_ops)
    {
        case 0:
        {
            return _iceD_ice_id(in, current);
        }
        case 1:
        {
            return _iceD_ice_ids(in, current);
        }
        case 2:
        {
            return _iceD_ice_isA(in, current);
        }
        case 3:
        {
            return _iceD_ice_ping(in, current);
        }
        case 4:
        {
            return _iceD_post(in, current);
        }
        case 5:
        {
            return _iceD_pull(in, current);
        }
        case 6:
        {
            return _iceD_setReceiver(in, current);
        }
        case 7:
        {
            return _iceD_setReceiverId(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

bool
Messager::Deliver::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_Messager_Deliver_ids, iceC_Messager_Deliver_ids + 2, s);
}

::std::vector<::std::string>
Messager::Deliver::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_Messager_Deliver_ids[0], &iceC_Messager_Deliver_ids[2]);
}

::std::string
Messager::Deliver::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
Messager::Deliver::ice_staticId()
{
    static const ::std::string typeId = "::Messager::Deliver";
    return typeId;
}

bool
Messager::Deliver::_iceD_registerBox(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::Messager::BoxInfo iceP_info;
    istr->readAll(iceP_info);
    inS.endReadParams();
    bool ret = this->registerBox(::std::move(iceP_info), current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}

bool
Messager::Deliver::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Messager_Deliver_ops, iceC_Messager_Deliver_ops + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_Messager_Deliver_ops)
    {
        case 0:
        {
            return _iceD_ice_id(in, current);
        }
        case 1:
        {
            return _iceD_ice_ids(in, current);
        }
        case 2:
        {
            return _iceD_ice_isA(in, current);
        }
        case 3:
        {
            return _iceD_ice_ping(in, current);
        }
        case 4:
        {
            return _iceD_registerBox(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

void
Messager::ReceiverPrx::_iceI_onRecv(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::Messager::Message& iceP_msg, const ::Ice::Context& context)
{
    outAsync->invoke(iceC_Messager_Receiver_onRecv_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_msg);
        },
        nullptr);
}

::std::shared_ptr<::Ice::ObjectPrx>
Messager::ReceiverPrx::_newInstance() const
{
    return ::IceInternal::createProxy<ReceiverPrx>();
}

const ::std::string&
Messager::ReceiverPrx::ice_staticId()
{
    return Messager::Receiver::ice_staticId();
}

void
Messager::BoxPrx::_iceI_post(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<bool>>& outAsync, const ::Messager::Message& iceP_msg, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_Messager_Box_post_name);
    outAsync->invoke(iceC_Messager_Box_post_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_msg);
        },
        nullptr);
}

void
Messager::BoxPrx::_iceI_pull(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::Ice::Context& context)
{
    outAsync->invoke(iceC_Messager_Box_pull_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        nullptr,
        nullptr);
}

void
Messager::BoxPrx::_iceI_setReceiver(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::std::shared_ptr<::Messager::ReceiverPrx>& iceP_val, const ::Ice::Context& context)
{
    outAsync->invoke(iceC_Messager_Box_setReceiver_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_val);
        },
        nullptr);
}

void
Messager::BoxPrx::_iceI_setReceiverId(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::Ice::Identity& iceP_recvid, const ::Ice::Context& context)
{
    outAsync->invoke(iceC_Messager_Box_setReceiverId_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_recvid);
        },
        nullptr);
}

::std::shared_ptr<::Ice::ObjectPrx>
Messager::BoxPrx::_newInstance() const
{
    return ::IceInternal::createProxy<BoxPrx>();
}

const ::std::string&
Messager::BoxPrx::ice_staticId()
{
    return Messager::Box::ice_staticId();
}

void
Messager::DeliverPrx::_iceI_registerBox(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<bool>>& outAsync, const ::Messager::BoxInfo& iceP_info, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_Messager_Deliver_registerBox_name);
    outAsync->invoke(iceC_Messager_Deliver_registerBox_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_info);
        },
        nullptr);
}

::std::shared_ptr<::Ice::ObjectPrx>
Messager::DeliverPrx::_newInstance() const
{
    return ::IceInternal::createProxy<DeliverPrx>();
}

const ::std::string&
Messager::DeliverPrx::ice_staticId()
{
    return Messager::Deliver::ice_staticId();
}

namespace Ice
{
}

#else // C++98 mapping

namespace
{

const ::std::string iceC_Messager_Receiver_onRecv_name = "onRecv";

const ::std::string iceC_Messager_Box_post_name = "post";

const ::std::string iceC_Messager_Box_pull_name = "pull";

const ::std::string iceC_Messager_Box_setReceiver_name = "setReceiver";

const ::std::string iceC_Messager_Box_setReceiverId_name = "setReceiverId";

const ::std::string iceC_Messager_Deliver_registerBox_name = "registerBox";

}
::IceProxy::Ice::Object* ::IceProxy::Messager::upCast(::IceProxy::Messager::Receiver* p) { return p; }

void
::IceProxy::Messager::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< ::IceProxy::Messager::Receiver>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Messager::Receiver;
        v->_copyFrom(proxy);
    }
}

::Ice::AsyncResultPtr
IceProxy::Messager::Receiver::_iceI_begin_onRecv(const ::Messager::Message& iceP_msg, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Messager_Receiver_onRecv_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_Messager_Receiver_onRecv_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_msg);
        result->endWriteParams();
        result->invoke(iceC_Messager_Receiver_onRecv_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::Messager::Receiver::end_onRecv(const ::Ice::AsyncResultPtr& result)
{
    _end(result, iceC_Messager_Receiver_onRecv_name);
}

::IceProxy::Ice::Object*
IceProxy::Messager::Receiver::_newInstance() const
{
    return new Receiver;
}

const ::std::string&
IceProxy::Messager::Receiver::ice_staticId()
{
    return ::Messager::Receiver::ice_staticId();
}
::IceProxy::Ice::Object* ::IceProxy::Messager::upCast(::IceProxy::Messager::Box* p) { return p; }

void
::IceProxy::Messager::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< ::IceProxy::Messager::Box>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Messager::Box;
        v->_copyFrom(proxy);
    }
}

::Ice::AsyncResultPtr
IceProxy::Messager::Box::_iceI_begin_post(const ::Messager::Message& iceP_msg, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_Messager_Box_post_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Messager_Box_post_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_Messager_Box_post_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_msg);
        result->endWriteParams();
        result->invoke(iceC_Messager_Box_post_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

bool
IceProxy::Messager::Box::end_post(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_Messager_Box_post_name);
    bool ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

::Ice::AsyncResultPtr
IceProxy::Messager::Box::_iceI_begin_pull(const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Messager_Box_pull_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_Messager_Box_pull_name, ::Ice::Normal, context);
        result->writeEmptyParams();
        result->invoke(iceC_Messager_Box_pull_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::Messager::Box::end_pull(const ::Ice::AsyncResultPtr& result)
{
    _end(result, iceC_Messager_Box_pull_name);
}

::Ice::AsyncResultPtr
IceProxy::Messager::Box::_iceI_begin_setReceiver(const ::Messager::ReceiverPrx& iceP_val, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Messager_Box_setReceiver_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_Messager_Box_setReceiver_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_val);
        result->endWriteParams();
        result->invoke(iceC_Messager_Box_setReceiver_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::Messager::Box::end_setReceiver(const ::Ice::AsyncResultPtr& result)
{
    _end(result, iceC_Messager_Box_setReceiver_name);
}

::Ice::AsyncResultPtr
IceProxy::Messager::Box::_iceI_begin_setReceiverId(const ::Ice::Identity& iceP_recvid, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Messager_Box_setReceiverId_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_Messager_Box_setReceiverId_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_recvid);
        result->endWriteParams();
        result->invoke(iceC_Messager_Box_setReceiverId_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::Messager::Box::end_setReceiverId(const ::Ice::AsyncResultPtr& result)
{
    _end(result, iceC_Messager_Box_setReceiverId_name);
}

::IceProxy::Ice::Object*
IceProxy::Messager::Box::_newInstance() const
{
    return new Box;
}

const ::std::string&
IceProxy::Messager::Box::ice_staticId()
{
    return ::Messager::Box::ice_staticId();
}
::IceProxy::Ice::Object* ::IceProxy::Messager::upCast(::IceProxy::Messager::Deliver* p) { return p; }

void
::IceProxy::Messager::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< ::IceProxy::Messager::Deliver>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Messager::Deliver;
        v->_copyFrom(proxy);
    }
}

::Ice::AsyncResultPtr
IceProxy::Messager::Deliver::_iceI_begin_registerBox(const ::Messager::BoxInfo& iceP_info, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_Messager_Deliver_registerBox_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Messager_Deliver_registerBox_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_Messager_Deliver_registerBox_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_info);
        result->endWriteParams();
        result->invoke(iceC_Messager_Deliver_registerBox_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

bool
IceProxy::Messager::Deliver::end_registerBox(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_Messager_Deliver_registerBox_name);
    bool ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

::IceProxy::Ice::Object*
IceProxy::Messager::Deliver::_newInstance() const
{
    return new Deliver;
}

const ::std::string&
IceProxy::Messager::Deliver::ice_staticId()
{
    return ::Messager::Deliver::ice_staticId();
}

Messager::Receiver::~Receiver()
{
}

::Ice::Object* Messager::upCast(::Messager::Receiver* p) { return p; }


namespace
{
const ::std::string iceC_Messager_Receiver_ids[2] =
{
    "::Ice::Object",
    "::Messager::Receiver"
};

}

bool
Messager::Receiver::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_Messager_Receiver_ids, iceC_Messager_Receiver_ids + 2, s);
}

::std::vector< ::std::string>
Messager::Receiver::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_Messager_Receiver_ids[0], &iceC_Messager_Receiver_ids[2]);
}

const ::std::string&
Messager::Receiver::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
Messager::Receiver::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::Messager::Receiver";
    return typeId;
#else
    return iceC_Messager_Receiver_ids[1];
#endif
}

bool
Messager::Receiver::_iceD_onRecv(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::Messager::Message iceP_msg;
    istr->read(iceP_msg);
    inS.endReadParams();
    this->onRecv(iceP_msg, current);
    inS.writeEmptyParams();
    return true;
}

namespace
{
const ::std::string iceC_Messager_Receiver_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "onRecv"
};

}

bool
Messager::Receiver::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Messager_Receiver_all, iceC_Messager_Receiver_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_Messager_Receiver_all)
    {
        case 0:
        {
            return _iceD_ice_id(in, current);
        }
        case 1:
        {
            return _iceD_ice_ids(in, current);
        }
        case 2:
        {
            return _iceD_ice_isA(in, current);
        }
        case 3:
        {
            return _iceD_ice_ping(in, current);
        }
        case 4:
        {
            return _iceD_onRecv(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

void
Messager::Receiver::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    Ice::StreamWriter< ::Messager::Receiver, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
Messager::Receiver::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::Messager::Receiver, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}

void
Messager::_icePatchObjectPtr(ReceiverPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Messager::ReceiverPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Messager::Receiver::ice_staticId(), v);
    }
}

Messager::Box::~Box()
{
}

::Ice::Object* Messager::upCast(::Messager::Box* p) { return p; }


namespace
{
const ::std::string iceC_Messager_Box_ids[2] =
{
    "::Ice::Object",
    "::Messager::Box"
};

}

bool
Messager::Box::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_Messager_Box_ids, iceC_Messager_Box_ids + 2, s);
}

::std::vector< ::std::string>
Messager::Box::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_Messager_Box_ids[0], &iceC_Messager_Box_ids[2]);
}

const ::std::string&
Messager::Box::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
Messager::Box::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::Messager::Box";
    return typeId;
#else
    return iceC_Messager_Box_ids[1];
#endif
}

bool
Messager::Box::_iceD_post(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::Messager::Message iceP_msg;
    istr->read(iceP_msg);
    inS.endReadParams();
    bool ret = this->post(iceP_msg, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}

bool
Messager::Box::_iceD_pull(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    inS.readEmptyParams();
    this->pull(current);
    inS.writeEmptyParams();
    return true;
}

bool
Messager::Box::_iceD_setReceiver(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::Messager::ReceiverPrx iceP_val;
    istr->read(iceP_val);
    inS.endReadParams();
    this->setReceiver(iceP_val, current);
    inS.writeEmptyParams();
    return true;
}

bool
Messager::Box::_iceD_setReceiverId(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::Ice::Identity iceP_recvid;
    istr->read(iceP_recvid);
    inS.endReadParams();
    this->setReceiverId(iceP_recvid, current);
    inS.writeEmptyParams();
    return true;
}

namespace
{
const ::std::string iceC_Messager_Box_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "post",
    "pull",
    "setReceiver",
    "setReceiverId"
};

}

bool
Messager::Box::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Messager_Box_all, iceC_Messager_Box_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_Messager_Box_all)
    {
        case 0:
        {
            return _iceD_ice_id(in, current);
        }
        case 1:
        {
            return _iceD_ice_ids(in, current);
        }
        case 2:
        {
            return _iceD_ice_isA(in, current);
        }
        case 3:
        {
            return _iceD_ice_ping(in, current);
        }
        case 4:
        {
            return _iceD_post(in, current);
        }
        case 5:
        {
            return _iceD_pull(in, current);
        }
        case 6:
        {
            return _iceD_setReceiver(in, current);
        }
        case 7:
        {
            return _iceD_setReceiverId(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

void
Messager::Box::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    Ice::StreamWriter< ::Messager::Box, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
Messager::Box::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::Messager::Box, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}

void
Messager::_icePatchObjectPtr(BoxPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Messager::BoxPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Messager::Box::ice_staticId(), v);
    }
}

Messager::Deliver::~Deliver()
{
}

::Ice::Object* Messager::upCast(::Messager::Deliver* p) { return p; }


namespace
{
const ::std::string iceC_Messager_Deliver_ids[2] =
{
    "::Ice::Object",
    "::Messager::Deliver"
};

}

bool
Messager::Deliver::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_Messager_Deliver_ids, iceC_Messager_Deliver_ids + 2, s);
}

::std::vector< ::std::string>
Messager::Deliver::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_Messager_Deliver_ids[0], &iceC_Messager_Deliver_ids[2]);
}

const ::std::string&
Messager::Deliver::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
Messager::Deliver::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::Messager::Deliver";
    return typeId;
#else
    return iceC_Messager_Deliver_ids[1];
#endif
}

bool
Messager::Deliver::_iceD_registerBox(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::Messager::BoxInfo iceP_info;
    istr->read(iceP_info);
    inS.endReadParams();
    bool ret = this->registerBox(iceP_info, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}

namespace
{
const ::std::string iceC_Messager_Deliver_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "registerBox"
};

}

bool
Messager::Deliver::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Messager_Deliver_all, iceC_Messager_Deliver_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_Messager_Deliver_all)
    {
        case 0:
        {
            return _iceD_ice_id(in, current);
        }
        case 1:
        {
            return _iceD_ice_ids(in, current);
        }
        case 2:
        {
            return _iceD_ice_isA(in, current);
        }
        case 3:
        {
            return _iceD_ice_ping(in, current);
        }
        case 4:
        {
            return _iceD_registerBox(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

void
Messager::Deliver::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    Ice::StreamWriter< ::Messager::Deliver, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
Messager::Deliver::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::Messager::Deliver, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}

void
Messager::_icePatchObjectPtr(DeliverPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Messager::DeliverPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Messager::Deliver::ice_staticId(), v);
    }
}

namespace Ice
{
}

#endif