#include <iostream>


using namespace std;

class A
{

public:
	void show()
	{
		cout << "in show(), data = " << data << endl;
		cout << "Calling static function via non static function" << endl;
		print();
	}
	static void print()
	{
		cout << "in static print(), data = " << data << endl;
	}
private:
	static int data;
};

int A::data = 10;

int main()
{

	A::print();
	A a1;
	a1.show();
	a1.print();
	return 0;
}	
