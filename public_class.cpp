#include<iostream>
using namespace std;
class Ram{
    public:
    int val;
    void show(){
        cout<<"Value:"<<val<<endl;

    }
};
int main()
{
    Ram obj;
    obj.val=108;
    obj.show();
    return 0;

}