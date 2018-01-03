#include <iostream>

using namespace std;

extern int y = 0; // Giving compiler warning
void func()
{

	//extern int x = 20; //It will give compilation error
	extern int z;
	//extern int y; // linker error
	//cout << y;
}


int main()
{
	func();
	return 0;

}
