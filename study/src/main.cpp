#include "public.h"

class animal
{
public:
	void sleep()
	{
		cout<<"animal sleep"<<endl;
	}
	virtual void breathe()
	{
		cout<<"animal breathe"<<endl;
	}
};
class fish:public animal
{
public:
	void breathe()
	{
		cout<<"fish bubble"<<endl;
	}
};

int main(int argc, char *argv[]) {
	std::cout << "Hello Easy C++ project!" << std::endl;
	fish fh;
	animal *pAn=&fh;
	pAn->breathe();
	return 0;
}