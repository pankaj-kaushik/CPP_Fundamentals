#include <iostream>

using namespace std;

void func()
{

	//extern int x = 20; //It will give compilation error
	extern int y; // linker error
	cout << y;
}


int main()
{
	func();
	return 0;

}
