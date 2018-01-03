#include <iostream>

using namespace std;

class A {

public:
	friend void show();

protected:
	friend void display();
	
private:
	friend void print();



};


void show()
{

	cout << "Function show() is called" << endl;

}

void display()
{

	cout << "Function display is called" << endl;

}

void print()
{

	cout << "Function print is called" << endl;

}

int main()
{

	show();
	display();
	print();
	return 0;
}
