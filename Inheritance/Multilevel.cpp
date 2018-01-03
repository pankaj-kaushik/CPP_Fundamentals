#include <iostream>

using namespace std;

class A
{

	public:
		A()
		{
			cout << "Constructor A() is called" << endl;
		} 
		void show()
		{
			cout << "A::show() is called" << endl;
		}
};

class B: public A
{

	public:
		B()
		{
			cout << "Constructor B() is called" << endl;
		} 
		void show(int x)
		{
			cout << "B::show() is called" << endl;
		}
};

class C: public B
{

};

int main()
{
	B b1;
	b1.show(20); // function show in b is called
	b1.show();

	C c1;
	c1.show(); // function show is called
	return 0;
}
