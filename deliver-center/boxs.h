/// boxs.h
//
//

#ifndef BOXS_H
#define BOXS_H

#include <messager.h>
#include <memory>

class DeliverS;

class BoxS : public Messager::Box
{
public:
    	virtual bool post(Messager::Message msg, const ::Ice::Current&);
    	virtual void pull(const Ice::Current&);
    	virtual void setReceiver(std::shared_ptr<::Messager::ReceiverPrx> rev, const Ice::Current&);
		virtual void setReceiverId(Ice::Identity, const ::Ice::Current&);

    	void setInfo(Messager::BoxInfo val){ _boxinfo = val; }
    	Messager::BoxInfo getInfo(){ return _boxinfo; }

    	void onMessage(const Messager::Message&);

private:
	Messager::BoxInfo _boxinfo;
	std::shared_ptr<Messager::ReceiverPrx> _receiver;
	DeliverS* _deliver=nullptr;
};

#endif /*BOXS_H*/
