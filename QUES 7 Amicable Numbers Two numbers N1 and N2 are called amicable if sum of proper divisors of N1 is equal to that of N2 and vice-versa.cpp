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
    // SAHIL SINGH
    // 2005535
    int num1, num2;
    num1 = 0;
    num2 = 100000;
    for (int i = 0; i < 10000; i++)
    {
        for (int j = i + 1; j < 10000; j++)
        {
            if (i != j)
            {
                findAmicable(i, j);
            }
        }
    }
    return 0;
}
