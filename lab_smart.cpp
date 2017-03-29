#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <memory>
using namespace std;

/* Getting input from the user in C++ is simply a matter
    of saying:
        int input;
        cin >> input;
    However, getting C++ to handle invalid input is 
    surprisingly complex. So here is a input() function
    that I have written that does it all for you.
    It behaves in a similar way to input() in Python
    and will raise a runtime_error exception if the user
    trys to enter anything that can't be converted to the
    correct type. You don't need to know how this work at
    the moment, just type...
        
        input<int>();

    ... to read in ints or ...
        
        input<float>();

    ..if you watch to read floats etc. . */
template<typename T>
T input()
{
    string buffer;
    getline(cin, buffer);

    stringstream ss(buffer);
    T input;

    if( ss >> input && ss.eof() )
        return input;

    throw runtime_error("Input is of invalid type");
}

int main()
{
    int size = 0;

    // get the size
    while( size <= 0 )
    {
        cout << "Enter a size: ";
        try
        {
            size = input<int>();

            if( size <= 0 )
                cout << "Not a valid size" << endl;
        }
        catch( runtime_error &e )
        {
            cerr << "Not an integer" << endl;
        }
    }

    cout << "Reading in " << size << " values." << endl;

    unique_ptr<int[]> values( new int[size] );

    for( int i=0; i<size; ++i )
    {
      while( true )
      {
        try
        {
          values[i] = input<int>();
          break;
        }
        catch( runtime_error &e )
        {
          cerr << "Not an integer" << endl;
        }
      }
    }

    // print everything in reverse
    for( int i=size-1; i>=0; --i )
    {
        cout << "Element " << i << " is " << values[i] << endl;
    }
  
    return 0;
}
