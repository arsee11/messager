/// delivers.h
//

#ifndef DELIVERS_H
#define DELIVERS_H

#include <messager.h>

class DeliverS : public Messager::Deliver
{
public:
    virtual bool registerBox(Messager::BoxInfo, const Ice::Current&);
    bool post(const Messager::Message&, const Ice::Current& c);
};

#endif /*DELIVERS_H*/
