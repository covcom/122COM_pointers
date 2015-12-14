#include <array>
#include <iostream>
using namespace std;

#include "leaker.h"

void change_everything( array<int,10> *sequence, int value )
{
	for( int &i : *sequence )
	{
		i = value;
	}
}

int main()
{
	array<int,10> sequence;

	// print the contents of sequence
	cout << "Before: ";
	for( int i : sequence ) 
		cout << i << ", "; 
	cout << endl;

	change_everything( &sequence, 42 );

	// print the contents of sequence
	cout << "After: ";
	for( int i : sequence ) 
		cout << i << ", "; 
	cout << endl;

	return 0;
}