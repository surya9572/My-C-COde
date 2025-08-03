//protected in drive class ram

#include <bits/stdc++.h>
using namespace std;

class Ram
{
protected:
    int val;
    void show()
    {
        cout << "Value: " << val << endl;
    }
};

class Derived : protected Ram
{
    void run()
    {
        val = 1000;
        show();
    }

    friend int main();
};

int main()
{
    Derived obj;
    obj.run();
    return 0;
}