#include <iostream>
#define INPUT_MAX 100000
using namespace std;
double myAvg(double input[], int i);
int main()
{
    double input[INPUT_MAX];
    int i = 0;
    cout << "*Enter any character to stop input*\n\n";
    while (cin >> input[i])
    {
        i++;
    }
    float average = (float)myAvg(input, i);
    cout << "Average: " << average << endl;
    return 0;
}
double myAvg(double input[], int i)
{
    double sum = 0;
    int count = 0;
    while (count != i)
    {
        sum += input[count];
        count++;
    }
    return sum / count;
}

