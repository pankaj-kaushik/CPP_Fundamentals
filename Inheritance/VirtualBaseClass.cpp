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

class B: virtual public A
{

	public:
		B()
		{
			cout << "Constructor B() is called" << endl;
		} 
};

class C: virtual public A
{
	public:
		C()
		{
			cout << "Constructor C() is called" << endl;
		}

};

class D: public B, public C
{

	public:
		D()
		{
			cout << "Constructor D() is called" << endl;
		}


};

int main()
{
	D d1;
	d1.show();	
	return 0;
}
