//Get and Set Function Program 
#include <bits/stdc++.h>
using namespace std;

class Circle
{
protected:
    double radius;

public:
    double getRadius()
    {
        return radius;
    }

    void setRadius(double r)
    {
        radius = r;
    }

    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle obj;
    obj.setRadius(2.5);
    cout << "Radius of circle: " << obj.getRadius() << endl;
    cout << "Area of circle: " << obj.compute_area();
    return 0;
}
