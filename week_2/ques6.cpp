#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int age;
    int basic, DA, HRA;
    double gross;

    void getdata()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Basic salary: ";
        cin >> basic;
        DA = 0.8 * basic;
        HRA = 0.1 * basic;
        gross = basic + DA + HRA;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Basic salary = " << basic << endl;
        cout << "Gross salary = " << gross << endl;
    }
};
int main()
{
    int n = 0;
    cout << "Enter number of employee: ";
    cin >> n;
    employee ob[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Employee " << i + 1 << " details" << endl;
        ob[i].getdata();
    }
    cout << "------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << endl;
        ob[i].display();
        cout << "------------------" << endl;
    }
    return 0;
}