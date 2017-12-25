#include <iostream>

using namespace std;

class A
{

	public: 
		A(int = 0);

	private:	
		int data;
};

A::A(int x):data(x)
{
	cout << "A Constructor is called";
}

int main()
{
	A a1;	
	return 0;
}
