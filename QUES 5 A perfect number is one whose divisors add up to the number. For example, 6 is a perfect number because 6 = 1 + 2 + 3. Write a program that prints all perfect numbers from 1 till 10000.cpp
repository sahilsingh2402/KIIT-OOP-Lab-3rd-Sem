#include <iostream>
using namespace std;
int main()
{
    // 2005535
    // SAHIL SINGH
    int i = 1, u = 1, sum = 0;
    cout << "The perfect numbers between 1 to 10000 are: \n";
    while (i <= 10000)
    {
        while (u <= 10000)
        {
            if (u < i)
            {
                if (i % u == 0)
                    sum = sum + u;
            }
            u++;
        }
        if (sum == i)
        {
            cout << i << "\n";
        }
        i++;
        u = 1;
        sum = 0;
    }
}
