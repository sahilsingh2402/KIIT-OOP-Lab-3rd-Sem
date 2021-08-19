// Ques 7
#include <iostream>
using namespace std;

void find_amicable(int num1_535, int num2_535)
{
    int sum1_535 = 0, sum2_535 = 0;
    for (int i_535 = 1; i_535 <= num1_535 / 2; i_535++)
    {
        if (num1_535 % i_535 == 0)
        {
            sum1_535 = sum1_535 + i_535;
        }
    }
    for (int i_535 = 1; i_535 <= num2_535 / 2; i_535++)
    {
        if (num2_535 % i_535 == 0)
        {
            sum2_535 = sum2_535 + i_535;
        }
    }
    if (num1_535 == sum2_535 && num2_535 == sum1_535)
    {
        cout << "(" << num1_535 << "," << num2_535 << ")\n";
    }
}

int main()
{
    for (int i_535 = 0; i_535 < 10000; i_535++)
    {
        for (int j_535 = i_535 + 1; j_535 < 10000; j_535++)
        {
            if (i_535 != j_535)
            {
                find_amicable(i_535, j_535);
            }
        }
    }
    return 0;
}


