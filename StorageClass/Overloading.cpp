#include <iostream>

using namespace std;

class A
{
	public:
		static void show()
		{
			cout << "Function show is called" << endl;
		}
		static void show(int x)
		{
			cout << "Function show is called with " << x << endl;
		}
		void show(int x, int y)
		{
			cout << "Function show is called with " << x << y << endl;
		}
		void show()
		{
			cout << "Non static function show is called" << endl;
		}		

};

int main()
{
	A::show();
	A::show(10);
	return 0;

}
