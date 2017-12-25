#include <iostream>

using namespace std;

class B
{

	public:
		B()
		{
			cout << "B() constructor is called" << endl;
		}

};

class A
{
	public : 
		A()
		{
			cout << "A() Constructor is called" << endl;
		}

	private:
		B b1;	
};


int main()
{

	A a1;
	cout << sizeof(A) << endl;
	return 0;
}
