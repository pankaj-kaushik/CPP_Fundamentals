#include <iostream>

using namespace std;

class A
{

	public: 
		virtual void show()
		{
			cout << "virtual function show";
		}
};


int main()
{
	A a1;
	a1.show();
	return 0;
}
