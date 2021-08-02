#include <iostream>
using namespace std;

int main()
{
    // 2005535
    // SAHIL SINGH
    float fahrenheit, celcius;
    int choice;

    cout << "1. Fahrenheit to celcius \n2. Celcius to Fahrenheit\n\nEnter your choice(1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter the Fahrenheit value :";
        cin >> fahrenheit;

        celcius = (fahrenheit - 32) / 1.8;
        cout << "It is " << celcius << " degree celcius" << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter the Celcius value: ";
        cin >> celcius;

        fahrenheit = (1.8 * celcius) + 32;
        cout << "It is " << fahrenheit << " degree Fahrenheit" << endl;
    }
    else
    {
        cout << "Please enter a valid input" << endl;
    }
    return 0;
}
