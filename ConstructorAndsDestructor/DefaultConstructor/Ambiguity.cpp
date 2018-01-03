#include <iostream>

using namespace std;


class A
{
	public : 
		A()
		{
			cout << "A() Constructor is called" << endl;
		}

		A(int = 0)
		{
			cout << "A() Constructor called with default argument" << endl;
		}
};


int main()
{

	A a1; // compilation error due to ambiguity
	return 0;
}
