//Circle program using Private

#include<iostream>
using namespace std;
class circle
{
    protected:
    double radius;
    double compute_area()
    {
        return
        3.14*radius*radius;
    }
    friend int main();
};
int main()
{
    circle obj;
    obj.radius=8.5;
    cout<<"Radius Is:" <<obj.radius<<endl;
    cout<<"Area is:"<<obj.compute_area();
    return 0;
}
