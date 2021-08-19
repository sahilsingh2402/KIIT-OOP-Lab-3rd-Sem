#include <iostream>
#include <cmath>
using namespace std;
struct Details
{
    float area;
    float perimeter;
};
Details area_perimeter(float);
Details area_perimeter(double);
Details area_perimeter(float, float);
Details area_perimeter(float, float, float);
int main()
{
    Details square, circle, rectangle, triangle;
    int choice;
    do
    {
        cout << "Enter your choice:\n1) Square\n2) Circle\n";
        cout << "3) Rectangle\n4) Triangle\n5) Exit\n->:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            float a;
            cout << "Enter a side of square: ";
            cin >> a;
            square = area_perimeter(a);
            cout << "=Area: " << square.area << endl;
            cout << "=perimeter: " << square.perimeter << endl;
            break;
        case 2:
            double r;
            cout << "Enter radius of circle: ";
            cin >> r;
            circle = area_perimeter(r);
            cout << "=Area: " << circle.area << endl;
            cout << "=perimeter: " << circle.perimeter << endl;
            break;
        case 3:
            float l, b;
            cout << "Enter Length and breadth of rectangle: ";
            cin >> l >> b;
            rectangle = area_perimeter(l, b);
            cout << "=Area: " << rectangle.area << endl;
            cout << "=perimeter: " << rectangle.perimeter << endl;
            break;
        case 4:
            float side_1, side_2, side_3;
            cout << "[Make sure (a+b)>c]\n";
            cout << "Enter sides of the triangle: ";
            cin >> side_1 >> side_2 >> side_3;
            triangle = area_perimeter(side_1, side_2, side_3);
            cout << "=Area: " << triangle.area << endl;
            cout << "=perimeter: " << triangle.perimeter << endl;
            break;
        default:
            cout << "\nExiting...\n";
        }
        cout << "-----------------\n";
    } while (choice >= 1 && choice <= 4);
    return 0;
}
Details area_perimeter(float a)
{
    Details detail;
    detail.area = a * a;
    detail.perimeter = a * 4;
    return detail;
}
Details area_perimeter(double r)
{
    Details detail;
    detail.area = 3.14159 * r * r;
    detail.perimeter = 2 * 3.14159 * r;
    return detail;
}
Details area_perimeter(float l, float w)
{
    Details detail;
    detail.area = l * w;
    detail.perimeter = 2 * (l + w);
    return detail;
}
Details area_perimeter(float a, float b, float c)
{
    Details detail;
    float s = (a + b + c) / 2;
    detail.area = sqrt(s * (s - a) * (s - b) * (s - c));
    detail.perimeter = a + b + c;
    return detail;
}

