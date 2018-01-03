#include <iostream>

using namespace std;



// Copy Constructor Examples

class A
{
	public : 
		A()
		{
			cout << "A() Default Constructor is called" << endl;
		}

		A(A& x)
		{
			cout << "A(A&) Copy Constructor called" << endl;
		}
};

A getObject(A x)
{
	
	return x;
}

takeObject(A& y)
{
	//return y;
}
int main()
{

	A a1, a3; 
	A a2(a1);
	a3 = getObject(a1);
	takeObject(a1); //it does not call copy constructor
	return 0;
}
