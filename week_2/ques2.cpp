#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int roll, marks;

    void get_student_data()
    {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display_data()
    {
        cout << "--------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    student ob;
    ob.get_student_data();
    ob.display_data();
    return 0;
}