#include <iostream>
using namespace std;

class Test
{
private:
    int a, b;
    static int k;

public:
    void insert()
    {
        cout << "Insert a,b,k: ";
        cin >> a >> b >> k;
    }
    void display()
    {
        cout << "a=" << a << "\tb=" << b << "\tk=" << k << endl;
    }
    static void output()
    {
        cout << "k=" << k << endl;
    }
};

int Test::k = 0;

int main()
{
    Test t1, t2;
    cout << "Obj 1:\n";
    t1.insert();
    t1.display();
    cout << "\nObj 2:\n";
    t2.insert();
    t2.display();
    cout << "\nObj 1:\n";
    t1.display();
}

