#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cout << "Enter number of students : ";
    cin >> n;

    string name[n + 1];
    int roll[n + 1];
    int marks[n + 1][5];
    int total[n + 1] = {};
    float percent[n + 1];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Name then roll number and followed by 5 marks of student " << i + 1 << " :-" << endl;
        cin >> name[i] >> roll[i];
        for (int ii = 0; ii < 5; ii++)
        {
            cin >> marks[i][ii];
            total[i] = total[i] + marks[i][ii];
        }
        percent[i] = total[i] * 2;
    }
    cout << "Percentage :- " << endl;
    for (int i = 0; i < n; i++)
        cout << "Student " << i + 1 << " : " << percent[i] << endl;
    cout << "Enter a roll number to display details : ";
    cin >> s;
    for (int j = 0; j < n; j++)
        if (s == roll[j])
        {
            cout << "\n\nDetails :- \n\nName : " << name[j] << "\nRoll Number : " << roll[j] << endl;
            for (int i = 0; i < 5; i++)
                cout << "Marks " << i + 1 << " : " << marks[j][i] << endl;
            break;
        }
    int range1, range2;
    cout << "Enter the starting and ending range of percentage :- ";
    cin >> range1 >> range2;
    for (int i = 0; i < n; i++)
    {
        if (percent[i] >= range1 && percent[i] <= range2)
        {
            cout << "\n\nDetails :- \n\nName : " << name[i] << "\nRoll Number : " << roll[i] << endl;
            for (int ii = 0; ii < 5; ii++)
                cout << "Marks " << ii + 1 << " : " << marks[i][ii] << endl;
        }
    }
    cout << "\n\nAfter Sorting :-- " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (total[i] > total[j])
            {
                name[n] = name[i];
                name[i] = name[j];
                name[j] = name[n];
                roll[n] = roll[i];
                roll[i] = roll[j];
                roll[j] = roll[n];
                for (int ii = 0; ii < 5; ii++)
                {
                    marks[n][ii] = marks[i][ii];
                    marks[i][ii] = marks[j][ii];
                    marks[j][ii] = marks[n][ii];
                }
                total[n] = total[i];
                total[i] = total[j];
                total[j] = total[n];
                percent[n] = percent[i];
                percent[i] = percent[j];
                percent[j] = percent[n];
            }
        }
    }
    cout << "\n\nDetails :-\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n\nName : " << name[i] << "\nRoll Number : " << roll[i] << endl;
        for (int ii = 0; ii < 5; ii++)
            cout << "Marks " << ii + 1 << " : " << marks[i][ii] << endl;
    }
    return 0;
}
