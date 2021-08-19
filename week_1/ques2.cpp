// Ques 2
#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int employee_id_535;
    string employee_name_535;
    float employee_salary_535;
};

int main()
{
    // 2005535
    // SAHIL SINGH
    Employee e_535;

    cout << "Enter the employee ID: ";
    cin >> e_535.employee_id_535;

    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, e_535.employee_name_535);

    cout << "Enter the employee salary: ";
    cin >> e_535.employee_salary_535;

    cout << "\nEmployee Details" << endl;
    cout << "Employee ID : " << e_535.employee_id_535 << endl;
    cout << "Employee Name : " << e_535.employee_name_535 << endl;
    cout << "Employee Salary : " << e_535.employee_salary_535 << endl;
    return 0;
}

