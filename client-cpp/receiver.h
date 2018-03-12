/// receiver.h
//
//

#ifndef RECEIVER_H
#define RECEIVER_H

#include <messager.h>
#include <memory>


class Receiver : public Messager::Receiver
{
public:
    	virtual void onRecv(Messager::Message msg, const ::Ice::Current&)override;

};

#endif /*RECEIVER_H*/
