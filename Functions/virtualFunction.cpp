#include <iostream>

using namespace std;


//Compilation error
virtual void show()
{

	cout << "Function show is called" << endl;
}

int main()
{

	show();
}
