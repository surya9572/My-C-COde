#include<iostream>
using namespace std;
int main() {
    int val=10;
    int*ptr=&val;
cout<<"value of x:"<<val<< endl;
cout<<"address of x:"<<&val<<endl;
cout<<"value stored in pointer ptr:"<<ptr<< endl;
cout<<"value pointed to:"<<*ptr<<endl;
return 0;
}

