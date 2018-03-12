///delivers.cpp
//
//

#include "delivers.h"
#include "boxs.h"
#include <Ice/Ice.h>
#include <iostream>

using namespace std;

bool DeliverS::registerBox(Messager::BoxInfo info, const Ice::Current& c)
{
	if( c.adapter->find( Ice::stringToIdentity(info.address)) != nullptr )
	{
		return true;	
	}
	
	auto i = std::make_shared<BoxS>();
	i->setInfo(info );
	//addBox(i);
	
	c.adapter->add(i, Ice::stringToIdentity(info.address) );	
	cout<<"new Box:"<<info.address<<endl;
	return true;
}

std::string findBox(const std::string& ownerid)
{
	return "box1."+ownerid;
}

bool DeliverS::post(const Messager::Message& msg, const Ice::Current& c)
{
	for(auto i : msg.to )
	{
		std::string boxaddr = findBox(i.id);
		auto obj = c.adapter->find( Ice::stringToIdentity(boxaddr));
		BoxS* box = dynamic_cast<BoxS*>(obj.get());	
		if(box == nullptr )
			return false;
		
		box->onMessage( msg );		
	}

	return true;
}
