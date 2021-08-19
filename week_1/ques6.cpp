#include <iostream>
using namespace std;

void mixing(string inp_string_535, int left_index_535, int right_index_535)
{
    if (left_index_535 == right_index_535)
        cout << inp_string_535 << endl;
    else
    {
        for (int i_535 = left_index_535; i_535 <= right_index_535; i_535++)
        {
            swap(inp_string_535[left_index_535], inp_string_535[i_535]);
            mixing(inp_string_535, left_index_535 + 1, right_index_535);
            swap(inp_string_535[left_index_535], inp_string_535[i_535]);
        }
    }
}

int main()
{
    // 2005535
    // SAHIL SINGH
    string str_535;
    cout << "Enter string: ";
    cin >> str_535;

    int str_size_535 = str_535.size();
    mixing(str_535, 0, str_size_535 - 1);
    return 0;
}
