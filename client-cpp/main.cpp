/// main.cpp
//

#include <Ice/Ice.h>
#include "receiver.h"

using namespace std;

class ClientApp : public Ice::Application
{
public:
	virtual int run(int, char*[]) override;
}; 


int main( int argc, char* argv[])
{
	ClientApp app;
	return app.main(argc, argv, "config.client");
}

int ClientApp::run(int argc, char* argv[])
{
	if (argc < 2)
	{
		cout << "usage: client [name]" << endl;
		return EXIT_FAILURE;
	}

	
	try {
	
		Messager::Owner me;
		me.id = argv[1];
		Messager::BoxInfo mbox1{ "box1."+me.id };
		me.boxs.push_back(mbox1);

		auto deliver = Ice::checkedCast<Messager::DeliverPrx>(
			communicator()->propertyToProxy("Deliver.Proxy"));
		deliver->registerBox(mbox1);

		Ice::PropertiesPtr ps = communicator()->getProperties();
		std::string boxstr = mbox1.address +":default " +ps->getProperty("DeliverHost");

		auto box1 = Ice::checkedCast<Messager::BoxPrx>(
			communicator()->stringToProxy(boxstr));

		//auto adapter = communicator()->createObjectAdapter("Receiver");
		//adapter->add(make_shared<Receiver>(), Ice::stringToIdentity("Receiver"));
		//adapter->activate();
		//auto receiver = Ice::uncheckedCast<Messager::ReceiverPrx>(
		//	adapter->createProxy(Ice::stringToIdentity("Receiver")));

		//box1->setReceiver(receiver);

		auto adapter = communicator()->createObjectAdapter("");
		Ice::Identity id;
		id.name = Ice::generateUUID();
		id.category = "";
		adapter->add(make_shared<Receiver>(), id);
		adapter->activate();
		box1->ice_getConnection()->setAdapter(adapter);
		box1->setReceiverId(id);

		Messager::Message m;
		m.from = me;
		m.subject = "hello";
		cout << "to who:";
		string who;
		cin >> who;
		m.to.push_back( Messager::Owner{ who } );
		bool rt = box1->post(m);
		cout << "post rt:" << rt << endl;
	}
	catch (Ice::Exception& e) {
		cerr << e << endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;

}
