#include <iostream>
#include "CreateDestroy.h"

using namespace std;

CreateAndDestroy::CreateAndDestroy(int Id, string messageString)
{
	ObjectId = Id;
	message = messageString;
	cout << endl << "Object " << ObjectId << " constructor called " << message << endl;
	
}

CreateAndDestroy::~CreateAndDestroy()
{
	cout << ( ObjectId == 1 || ObjectId == 6 ? "\n" : "");
	cout << endl << "Object " << ObjectId << " destructor called " << message << endl;
}
