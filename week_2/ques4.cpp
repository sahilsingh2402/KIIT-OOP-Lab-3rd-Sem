#include <iostream>
using namespace std;

class complex
{
public:
    int real;
    int img;

    void get_num_data()
    {
        cout << "\nEnter Real Part: ";
        cin >> real;

        cout << "Enter Imaginary Part: ";
        cin >> img;
    }

    void display_num()
    {
        static int n = 1;
        cout << "Number " << n++ << " : " << real << "+" << img << "i" << endl;
    }
};

int main()
{
    complex ob[10];
    for (int i = 0; i < 10; i++)
    {
        ob[i].get_num_data();
    }
    cout << "----------------------" << endl;
    for (int i = 0; i < 10; i++)
    {
        ob[i].display_num();
    }
    return 0;
}