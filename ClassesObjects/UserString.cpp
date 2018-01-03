#include <iostream>
#include <cstring>

using namespace std;


class Xstring
{

	public:
		Xstring():len(0), p(0) 
		{ 
			cout << "Default Constructor Fired" << endl;
		};
		Xstring(const char* str)
		{
			cout << "Creating string from char * " << endl;
			len = strlen(str);
			p = new char[ len + 1 ];
			strcpy(p, str);
		}
		Xstring(const Xstring &s)
		{
			cout << "copy constructor fired" << endl;
			len = s.len;
			p = new char[ len + 1 ];
			strcpy(p, s.p);
		}
		~Xstring()
		{
			delete p;
			cout << "destructor fired" << endl;
		}

		friend void show(const Xstring s)
		{
			cout << s.p << endl;
		}
	

	private:
		char * p;
		int len;
};


int main()
{

	Xstring s1 = "pankaj", s2 = "kaushik", s3;
	s3 = s1;
	//cout << "s3 = " << s3;
	//show(s3);
	//Xstring s4 = s3;
	return 0;
}
