#include <iostream>

using namespace std;

class A
{
	

};
int main()
{
	A a1;
	a1 = a1;
	cout << sizeof(a1) << sizeof(A) << endl;
	return 0;
}
