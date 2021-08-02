#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int employee_id;
    string employee_name;
    float employee_salary;
};

int main()
{
    // 2005535
    // SAHIL SINGH
    Employee e;

    cout << "Enter the employee ID: ";
    cin >> e.employee_id;

    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, e.employee_name);

    cout << "Enter the employee salary: ";
    cin >> e.employee_salary;

    cout << "\nEmployee Details" << endl;
    cout << "Employee ID : " << e.employee_id << endl;
    cout << "Employee Name : " << e.employee_name << endl;
    cout << "Employee Salary : " << e.employee_salary << endl;
    return 0;
}
