#include <array>
#include <string>
#include <iostream>
using namespace std;

void test_int( int *ptr ) { cout << "An int takes " << sizeof(*ptr) << " bytes but a pointer to one takes " << sizeof(ptr) << "bytes" << endl; }
void test_uint( unsigned int *ptr ) { cout << "An unsigned int takes " << sizeof(*ptr) << " bytes but a pointer to one takes " << sizeof(ptr) << "bytes" << endl; }
void test_short( short *ptr ) { cout << "A short takes " << sizeof(*ptr) << " bytes but a pointer to one takes " << sizeof(ptr) << "bytes" << endl; }
void test_char( char *ptr ) { cout << "A char takes " << sizeof(*ptr) << " bytes but a pointer to one takes " << sizeof(ptr) << "bytes" << endl; }
void test_float( float *ptr ) { cout << "A float takes " << sizeof(*ptr) << " bytes but a pointer to one takes " << sizeof(ptr) << "bytes" << endl; }
void test_double( double *ptr ) { cout << "A double takes " << sizeof(*ptr) << " bytes but a pointer to one takes " << sizeof(ptr) << "bytes" << endl; }
void test_string( string *ptr ) { cout << "A string takes " << sizeof(*ptr) << " bytes but a pointer to one takes " << sizeof(ptr) << "bytes" << endl; }
void test_array( array<int,10> *ptr ) { cout << "An array of 10 elements takes " << sizeof(*ptr) << " bytes but a pointer to one takes " << sizeof(ptr) << "bytes" << endl; }

int main()
{
	int myInt = 1;
	unsigned int myUInt = 2;
	short myShort = 3;
	char myChar = 'A';
	float myFloat = 1.23;
	double myDouble = 2.31;
	string myString = "hello";
	array<int,10> myArray {1,2,3,4,5,6,7,8,9,10};

	test_int( /*COMPLETE ME, I NEED A POINTER*/ );
	test_uint( /*COMPLETE ME, I NEED A POINTER*/ );
	test_short( /*COMPLETE ME, I NEED A POINTER*/ );
	test_char( /*COMPLETE ME, I NEED A POINTER*/ );
	test_float( /*COMPLETE ME, I NEED A POINTER*/ );
	test_double( /*COMPLETE ME, I NEED A POINTER*/ );
	test_string( /*COMPLETE ME, I NEED A POINTER*/ );
	test_array( /*COMPLETE ME, I NEED A POINTER*/ );

	return 0;
}