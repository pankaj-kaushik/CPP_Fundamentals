#include <string>

using namespace std;

#ifndef CREATEDESTROY_H
#define CREATEDESTROY_H

class CreateAndDestroy
{
	public :
		CreateAndDestroy( int, string);
		~CreateAndDestroy();
	private:
		int ObjectId;
		string message;

};
#endif
