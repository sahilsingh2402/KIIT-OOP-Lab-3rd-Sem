#include <iostream>
#include <stdarg.h>
using namespace std;
double myAvg(int num, ...);
int main()
{
    float average = (float)myAvg(3, 1.0, 2.0, 3.0);
    cout << "Average: " << average << endl;
    average = (float)myAvg(5, 2.6, 2.7, 15.1, 12.7, 19.9);
    cout << "Average: " << average << endl;
    return 0;
}
double myAvg(int num, ...)
{
    va_list valist;
    double sum = 0;
    va_start(valist, num);
    for (int i = 0; i < num; i++)
        sum += va_arg(valist, double);
    va_end(valist);
    return sum / num;
}

