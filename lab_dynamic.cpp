#include <array>
#include <iostream>
using namespace std;

class ReallyBigClass
{
public:
    array<int,100> bigArray;
    array<int,10000> massiveArray;
};

int main()
{
    ReallyBigClass var;
    ReallyBigClass *ptr = new ReallyBigClass;

    cout << "Size of var is " << sizeof(var) << " bytes" << endl;
    cout << "Size of ptr is " << sizeof(ptr) << " bytes but it's pointing at " << sizeof(*ptr) << " bytes" << endl;

    return 0;
}