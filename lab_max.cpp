#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int *find_max( vector<int> &storage )
{
	// COMPLETE ME
}

int main()
{
	vector<int> storage;

	// generage some 'random' numbers
	for( int i=0; i<20; ++i )
	{
		storage.emplace_back( sin(i*0.2) * 100 );
	}

	// display storage
	cout << "storage: "; for( int i : storage ) { cout << i << ", "; } cout << endl;

	int *ptr = find_max( storage );

	cout << "The biggest number is " << *ptr << endl;

	cout << "Changing it to 0" << endl;
	*ptr = 0;

	// display storage
	cout << "storage: "; for( int i : storage ) { cout << i << ", "; } cout << endl;
	
	return 0;
}