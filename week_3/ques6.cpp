#include <iostream>
using namespace std;
void print_hello(char *arg[], int a);
int main(int a, char *arg[])
{
    print_hello(arg, a);
    return 0;
}
void print_hello(char *arg[], int a)
{
    if (a == 1)
        return;
    cout << "Hello ";
    for (int i = 1; i < a - 1; i++)
        cout << arg[i] << ", ";
    if (a >= 3)
        cout << "\b\b and " << *(arg + a - 1);
    else if (a == 2)
        cout << *(arg + 1);
    cout << ", Welcome to KIIT\n";
}

