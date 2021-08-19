#include <iostream>
using namespace std;

inline int square(int x)
{
    return (x * x);
}

inline int cube(int x)
{
    return (x * x * x);
}

int main()
{
    cout << "Square: " << square(4);
    cout << "\nCube: " << cube(5);
    return 0;
}

