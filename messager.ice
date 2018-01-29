///messager.ice

#pragma once

#include <Ice/Identity.ice>

module Messager
{
	struct BoxInfo
	{
		string address;
	}

	sequence<BoxInfo> BoxList;

	struct Owner
	{
		string id;
		BoxList boxs;
	}

	sequence<Owner> OwnerList;

	struct Message
	{
		OwnerList to;
		Owner from;
		string subject;
	}

	interface Receiver
	{
		void onRecv(Message msg);	
	}

	interface Box
	{
		bool post(Message msg);
		void pull();

		void setReceiver(Receiver* val);
		void setReceiverId(Ice::Identity recvid);		
	}

	interface Deliver
	{
		bool registerBox(BoxInfo info);
		
	}

}
