#include <iostream>  
using namespace std;  

class A  
{  
public:  
    void Show()  
    {  
        cout << "Hello from A\n";  
    }  
};  

class B : public A  
{  
};  

class C : public A  
{  
};
class D : public B, public C  
{  
};  

int main()  
{  
    D object;  
    object.show();  
}