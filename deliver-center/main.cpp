/// main.cpp
//

#include <Ice/Ice.h>
#include "delivers.h"

using namespace std;

class DeliverCenter : public Ice::Application
{
public:
	virtual int run(int, char*[]) override;
}; 


int main( int argc, char* argv[])
{
	DeliverCenter app;
	return app.main(argc, argv, "config.deliver");
}

int DeliverCenter::run(int argc, char* argv[])
{
	try{
		auto adapter = communicator()->createObjectAdapter("DeliverCenter");
		adapter->add(make_shared<DeliverS>(), Ice::stringToIdentity("Deliver") );
		adapter->activate();
		communicator()->waitForShutdown();
		return EXIT_SUCCESS;
	}catch(Ice::Exception& e){
		cerr<< e <<endl;
		return EXIT_FAILURE;
	}

}
