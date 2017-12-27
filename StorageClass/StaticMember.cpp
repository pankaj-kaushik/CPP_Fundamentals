#include <iostream>

using namespace std;

class B
{

	public:
		B(int x=0)
		{
			cout << "B Constructor" << endl;
			data = x;
		}
		int getdata()
		{
			return data;
		}
	private:
		int data;
};

class A
{
	public:
		A()
		{
			cout << "Constructor A is called" << endl;
		}
		//static int x = 20; //compilation error
		static int x;
		void print()
		{
			cout << "printing B Class data item" << b1.getdata() << endl;
		}
	protected:
		//static int y = 30;//compilation error
		static int y;
	private:
		//static int z = 40; //compilation error
		static int z;
		static B b1;

};


int A::x = 20;
int A::y = 30; // You can initialize but can not use outside the class
int A::z = 40; // You can initialize but can not use

B A::b1;

int main()
{
	A a1;
	cout << "Printing Static Members of class A" << endl;

	//Below will result into compilation error
	//cout << A::x << A::y << A::z << endl;

	cout << A::x << " "<< a1.x <<endl;
	A::x++;
	cout << A::x << endl;

	//static B b1;	
	a1.print();
	return 0;
}
