#include <iostream>

using namespace std;

class B;

class A {

public:
	void show(B &);

};

class B
{
	public:
		B(int x):item(x)
		{
		
		}
		friend void A::show(B &);
	private:
		int item;
};

void A::show(B & b)
{
	cout << "Function A::show() is called" << endl << "Printing class B data member via show" << endl <<"data = " << b.item << endl;

}

int main()
{
	B b1(20);
	A a1;
	a1.show(b1);
	return 0;
}
