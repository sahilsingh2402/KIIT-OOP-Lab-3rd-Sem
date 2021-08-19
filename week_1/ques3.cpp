// Ques 3
#include <iostream>
using namespace std;

int main()
{
    // 2005535
    // SAHIL SINGH
    int x_535, y_535, sum_535, difference_535, product_535, modulo_535;
    float quotient_535;
    char choice_535;

    cout << "Enter First Number: ";
    cin >> x_535;

    cout << "Enter Second Number: ";
    cin >> y_535;

    cout << "Enter Operator: ";
    cin >> choice_535;

    if (choice_535 == '+')
    {
        sum_535 = x_535 + y_535;
        cout << "\nSum = " << sum_535;
    }

    else if (choice_535 == '-')
    {
        difference_535 = x_535 - y_535;
        cout << "\nDifference  = " << difference_535;
    }

    else if (choice_535 == '*')
    {
        product_535 = x_535 * y_535;
        cout << "\nMultiplication = " << product_535;
    }

    else if (choice_535 == '/')
    {
        quotient_535 = (float)x_535 / y_535;
        cout << "\nDivision = " << quotient_535;
    }

    else
    {
        cout << "Please enter a valid input" << endl;
    }
    return 0;
}

