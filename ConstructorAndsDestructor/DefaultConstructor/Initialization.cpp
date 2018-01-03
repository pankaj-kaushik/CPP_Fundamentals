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
		A(int x)
		{
			cout << "A(init x) parametrized constructor" << endl;
		}
		void show()
		{
			cout << "Show function is called" << endl;
		}

	private:
		B b1;	
};


int main()
{

	A a1; // implicit constructor calling
	cout << sizeof(A) << endl;
	A a2 = A(); // explicit constructor calling

	//This will be treated as function declaration

	A a3(); // Function declaration
	//a3.show(); // it is an errro
	return 0;
}
