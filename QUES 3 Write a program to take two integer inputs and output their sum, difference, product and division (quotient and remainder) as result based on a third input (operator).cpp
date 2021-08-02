#include <iostream>
using namespace std;

int main()
{
    // 2005535
    // SAHIL SINGH
    int x, y;
    int sum, difference, product, modulo;
    float quotient;
    char choice;

    cout << "Enter First Number: ";
    cin >> x;
    cout << "Enter Second Number: ";
    cin >> y;
    cout << "Enter Operator: ";
    cin >> choice;

    if (choice == '+')
    {
        sum = x + y;
        cout << "\nSum = " << sum;
    }
    else if (choice == '-')
    {
        difference = x - y;
        cout << "\nDifference  = " << difference;
    }
    else if (choice == '*')
    {
        product = x * y;
        cout << "\nMultiplication = " << product;
    }
    else if (choice == '/')
    {
        quotient = (float)x / y;
        cout << "\nDivision = " << quotient;
    }
    else
    {
        cout << "Please enter a valid input" << endl;
    }
    return 0;
}
