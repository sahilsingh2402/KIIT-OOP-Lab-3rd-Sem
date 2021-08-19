#include <iostream>
#include <cmath>
using namespace std;

float area_perimeter(float r)
{

    float area_535 = 3.14159 * r * r;
    return area_535;
}

float area_perimeter(float l, float w)
{
    float area_535 = l * w;
    return area_535;
}

float area_perimeter(float a, float b, float c)
{
    float s_535 = (a + b + c) / 2;
    float area_535 = sqrt(s_535 * (s_535 - a) * (s_535 - b) * (s_535 - c));
    return area_535;
}

int main()
{
    float a_535, b_535, c_535;
    int choice_535;
    do
    {
        cout << "Choices\n1) Circle\n";
        cout << "2) Rectangle\n3) Triangle\n4) Exit\nEnter your choice: ";
        cin >> choice_535;
        switch (choice_535)
        {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> a_535;
            cout << "Area: " << area_perimeter(a_535) << endl;
            break;
        case 2:
            cout << "Enter Length and breadth of rectangle: ";
            cin >> a_535 >> b_535;
            cout << "Area: " << area_perimeter(a_535, b_535) << endl;
            break;
        case 3:
            cout << "Enter sides of the triangle: ";
            cin >> a_535 >> b_535 >> c_535;
            cout << "Area: " << area_perimeter(a_535, b_535, c_535) << endl;
            break;
        default:
            cout << "\nExiting...\n";
        }
        cout << "-----------------\n";
    } while (choice_535 >= 1 && choice_535 <= 3);
    return 0;
}
