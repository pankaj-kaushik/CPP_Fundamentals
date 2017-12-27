#include <iostream>

using namespace std;


class A
{
	public:
		A(int x = 0):data(x)
		{
			cout << "Constructor A() Called" << endl;
		}
	private:
		int data;
};

class B
{
	public:
		B(int input = 0):item(input)
		{
			cout << "Constructor B() called" << endl;
		}
		
	private:
		int item;
		//static A a1;
		
		A *a2;
		//A &a2; // Compilation error should be initialized

};

int main()
{
	B b1;
	return 0;
}


