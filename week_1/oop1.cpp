/*
// Ques 1
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!!!" << endl;
    return 0;
}
*/

// Ques 2
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

/*
// Ques 3
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int sum, difference, product, modulo;
    float quotient;
    char choice;

    cout << "Enter First Number: ";
    cin >> x;
    cout << "Enter Second Number: ";
    cin >> y;
    cout << "Enter Operator: ";
    cin >> choice;

    if (choice == '+')
    {
        sum = x + y;
        cout << "\nSum = " << sum;
    }
    if (choice == '-')
    {
        difference = x - y;
        cout << "\nDifference  = " << difference;
    }
    if (choice == '*')
    {
        product = x * y;
        cout << "\nMultiplication = " << product;
    }
    if (choice == '/')
    {
        quotient = (float)x / y;
        cout << "\nDivision = " << quotient;
    }
    else
    {
        cout << "Please enter a valid input" << endl;
    }
    return 0;
}
*/
/*
// Ques 4
#include <iostream>
using namespace std;

int main()
{
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
*/
/*
// Ques 5
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == n)
    {
        cout << i << " is a perfect number\n";
    }
    else
    {
        cout << i << " is not a perfect number\n";
    }
    return 0;
}
*/
/*
// Ques 6
#include <iostream>
using namespace std;

void permute(string a, int l, int r)
{
    if (l == r)
        cout << a << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    int n = str.size();
    permute(str, 0, n - 1);
    return 0;
}
*/
/*
// Ques 7
#include <iostream>
using namespace std;

void findAmicable(int num1, int num2)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= num1 / 2; i++)
    {
        if (num1 % i == 0)
        {
            sum1 = sum1 + i;
        }
    }
    for (int i = 1; i <= num2 / 2; i++)
    {
        if (num2 % i == 0)
        {
            sum2 = sum2 + i;
        }
    }
    if (num1 == sum2 && num2 == sum1)
    {
        cout << "(" << num1 << "," << num2 << ")\n";
    }
}
int main()
{
    int num1, num2;
    num1 = 0;
    num2 = 100000;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (i != j)
            {
                findAmicable(i, j);
            }
        }
    }
    return 0;
}
*/
