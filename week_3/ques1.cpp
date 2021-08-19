#include <iostream>
using namespace std;
int main()
{
    char str[50];

    cout << "Enter a string : ";
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << "ASCII value of " << str[i] << " is " << int(str[i]) << endl;
    }
    return 0;
}
