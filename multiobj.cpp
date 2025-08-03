//Multiple object using 
#include<iostream>
using namespace std;
class car
{
    public:
    string brand;
    string model;
    int year;
};
int main()
{
    car carobj1;

    carobj1.brand="B M W";

    carobj1.model="XYZ";

    carobj1.year=1996;

   car carobj2;

    carobj2.brand="Audi";

    carobj2.model="XUV";

    carobj2.year=1999;

    cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;

     cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<endl;

     return 0;
}