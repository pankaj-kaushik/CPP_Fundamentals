#include <iostream>

#include "CreateDestroy.h"

using namespace std;

void create( void );

CreateAndDestroy first( 1, "global object before main" );

int main()
{
	cout << "Starting Main Function Execution" << endl;
	CreateAndDestroy second( 2, "local object in main" );
	static CreateAndDestroy third( 3, "local static object in main" );
	create();

	cout << endl << "Main function Resumes" << endl;
	CreateAndDestroy fourth( 4, "local object in main" );
	cout << endl << "Ending Main Function Execution" << endl;

}

void create( void )
{
	cout << endl << "Starting Create Function Execution" << endl;
	CreateAndDestroy fifth( 5, "local object in create" );
	static CreateAndDestroy sixth( 6, "local object in create" );
	CreateAndDestroy seventh( 6, "local object in create" );
	cout << endl << "Ending create Function Execution" << endl;
}
