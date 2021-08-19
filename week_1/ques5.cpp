#include <iostream>
using namespace std;

void find_perfect(int n_535)
{
    int i_535 = 1, sum_535 = 0;
    while (i_535 < n_535)
    {
        if (n_535 % i_535 == 0)
        {
            sum_535 = sum_535 + i_535;
        }
        i_535++;
    }

    if (sum_535 == n_535)
    {
        cout << i_535 << " is a perfect number\n";
    }
}

int main()
{
    // 2005535
    // SAHIL SINGH
    for (int n_535 = 1; n_535 < 10000; n_535++)
    {
        find_perfect(n_535);
    }
    return 0;
}
