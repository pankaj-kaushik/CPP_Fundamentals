#include <iostream>

using namespace std;

class A
{

	public:
		const int x = 10;
	protected:
		const int y = 20;
};

int main()
{
	A a1;
	cout << a1.x << endl << a1.y;
	return 0;
}
