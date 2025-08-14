#include<iostream>
using namespace std;
int main(){
    int val=22;
    int*ptr=&val;
    cout<<*ptr <<endl;
    cout<<&val;
    return 0;
}