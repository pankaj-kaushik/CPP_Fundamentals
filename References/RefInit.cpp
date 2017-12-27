#include <stdio.h>

int main()
{
	const int x = 10, z = 20;
	int &y = x;
	//y++; // Compilation Error
}



