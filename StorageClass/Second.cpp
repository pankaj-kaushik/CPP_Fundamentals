#include <iostream>

using namespace std;

int x = 10;

class A
{
	public:
		void show()
		{
			int x = 30;
			cout << x << endl << ::x; //::x will print 10
		}
	private:
		const int x = 20;
};

int main()
{
	A a1;
	a1.show();
	return 0;

}
