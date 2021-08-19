#include <iostream>
using namespace std;

class Student
{
public:
    char name_535[20];
    int roll_535;
    float totalmarks_535;
    float average_535;
};

void insert(Student &student)
{
    cout << "Enter name: ";
    cin >> student.name_535;
    cout << "Enter Roll: ";
    cin >> student.roll_535;
    cout << "Enter total marks: ";
    cin >> student.totalmarks_535;
}

void average(Student student[], int n)
{
    float sum_535 = 0;
    for (int i = 0; i < n; i++)
    {
        sum_535 += student[i].totalmarks_535;
    }

    for (int i = 0; i < n; i++)
    {
        student[i].average_535 = sum_535 / n;
    }
}

void display(Student student)
{
    cout << "Name: " << student.name_535 << endl;
    cout << "Roll: " << student.roll_535 << endl;
    cout << "Total Marks: " << student.totalmarks_535 << endl;
    cout << "Average: " << student.average_535 << endl;
}

int main()
{
    Student student_535[10];
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Student no.: " << i + 1 << endl;
        insert(student_535[i]);
    }
    average(student_535, n);
    for (int i = 0; i < n; i++)
    {
        cout << "Student no.: " << i + 1 << endl;
        display(student_535[i]);
        cout << endl;
    }
    return 0;
}

