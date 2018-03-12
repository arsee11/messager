/// receiver.cpp
//
//

#include "receiver.h"
#include <iostream>

using namespace std;

void Receiver::onRecv(Messager::Message msg, const ::Ice::Current&)
{
	cout << "Recv a message:" << endl;
	cout << "from:\t" << msg.from.id << endl;
	cout << "subject:\t" << msg.subject << endl;
}