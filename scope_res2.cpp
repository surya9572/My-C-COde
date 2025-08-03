#include<iostream>
using namespace std;
class Ram{
    public:
    static int x;
};
int Ram::x=216;
int main(){
    cout<<Ram::x;
    return 0;
}