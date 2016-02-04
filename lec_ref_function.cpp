#include <vector>
#include <iostream>
using namespace std;

int find( vector<int> &seq, int val )
{
	for( int i : seq )
		if( i == val )
			return true;
		
	return false;
}

int main()
{
	vector<int> seq { 1, 69, 42, 5 };

	cout << find( seq, 42 ) << endl;

	return 0;
}