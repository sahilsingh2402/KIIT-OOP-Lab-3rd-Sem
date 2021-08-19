#include <iostream>
#include <math.h>
using namespace std;

void interest(float pri, int time, float rate = 7.5)
{
    float si = (pri * rate * time) / 100;
    cout << "Simple Interest: " << si;
}

void interest(float pri, float time, float rate)
{
    float ci = pri * pow((1 + rate / 100), time);
    cout << "Compound Interest: " << ci;
}

int main()
{
    int choice;

    cout << "1. Simple Interest\n";
    cout << "2. Compound Interest\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        int time;
        float pri, rate;
        cout << "Enter principle, rate of interest and time: ";
        cin >> pri >> rate >> time;
        interest(pri, time, rate);
        break;
    case 2:
        float p, r, t;
        cout << "Enter principle, rate of interest and time: ";
        cin >> p >> r >> t;
        interest(p, t, r);
        break;

    default:
        cout << "Wrong Choice!";
        break;
    }
    return 0;
}