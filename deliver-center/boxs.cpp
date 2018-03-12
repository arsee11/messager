/// boxs.cpp
//
//

#include "boxs.h" 
#include "delivers.h"
#include <Ice/Ice.h>
#include <iostream>

using namespace std;

bool BoxS::post(::Messager::Message msg, const ::Ice::Current& c)
{
	cout<<"box("<<_boxinfo.address<<") post:"<<msg.subject<<endl;
	_deliver->post(msg, c);
}

void BoxS::pull(const ::Ice::Current&)
{
	
}

void BoxS::setReceiver(::std::shared_ptr<::Messager::ReceiverPrx> rev, const ::Ice::Current&)
{
	_receiver = rev;
}

void BoxS::setReceiverId(Ice::Identity recvid, const ::Ice::Current& c)
{
	_receiver = Ice::uncheckedCast<Messager::ReceiverPrx>(
		c.con->createProxy(recvid));		
}

void BoxS::onMessage(const Messager::Message& msg)
{
	Messager::Message m = const_cast<Messager::Message&>(msg);
	_receiver->onRecv(m);
}

