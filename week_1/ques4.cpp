#include <iostream>
using namespace std;

int main()
{
    // 2005535
    // SAHIL SINGH
    float fahrenheit_535, centimeter_535;
    int choice_535;

    cout << "1. Fahrenheit to celcius \n2. Centimeters to feet and inches \n\nEnter your choice(1 or 2): ";
    cin >> choice_535;

    if (choice_535 == 1)
    {
        cout << "Enter the temperature in celsius: ";
        cin >> fahrenheit_535;

        fahrenheit_535 = (fahrenheit_535 * 1.8) + 32;
        cout << "It is " << fahrenheit_535 << " degree celcius" << endl;
    }
    else if (choice_535 == 2)
    {
        cout << "Enter the height in centimeters: ";
        cin >> centimeter_535;

        centimeter_535 = centimeter_535 / 2.54;
        cout << "It is " << centimeter_535 << " inches and " << centimeter_535 / 12 << " feet" << endl;
    }
    else
    {
        cout << "Please enter a valid input" << endl;
    }
    return 0;
}
