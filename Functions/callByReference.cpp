#include <iostream>

using namespace std;


void update(string &name)
{

	name = "Pankaj";
}

int main()
{
	string str = "ram";
	cout << "String before updating is : " << str << endl;
	update(str);
	cout << "String after updating is : " << str << endl;
	return 0;
}
