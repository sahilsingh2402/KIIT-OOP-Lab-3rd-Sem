#include <iostream>
using namespace std;

void ref(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;

    cout << "\nEnter two numbers to be swapped: ";
    cin >> a >> b;

    cout << "Swapping using call by reference.....\n";
    ref(a, b);
    cout << a << " " << b;
    return 0;
}
