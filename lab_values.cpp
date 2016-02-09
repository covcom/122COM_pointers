#include <iostream>
using namespace std;

int test( int value, int expected )
{
	if( value != expected )
	{
		cerr << "Error - value should be " << expected << " but it's " << value << " instead." << endl;
		return 1;
	}

	return 0;
}

int main()
{
	int errors = 0;
	int value = 123456789;

	// COMPLETE ME
	// change value to be 42, BUT you aren't allowed to write anything like
	//     value = 42;
	// you've got to use a pointer

	errors += test( value, 42 );

	// COMPLETE ME
	// change value to be 69, BUT you aren't allowed to write anything like
	//     value = 69;
	// you've got to use a pointer

	errors += test( value, 69 );

	// COMPLETE ME
	// change value to be 999, BUT you aren't allowed to write anything like
	//     value = 999;
	// you've got to use a pointer

	errors += test( value, 999 );

	if( errors == 0 )
		cout << "Congratulations, no errors." << endl;
	else
		cout << "Uh Oh! still " << errors << " error/s." << endl;

	return 0;
}