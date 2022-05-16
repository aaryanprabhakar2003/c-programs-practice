#include <iostream>
using namespace std;
class A{
    int x;
    protected:
    int y;
    public:
    int z;
    void set_x(){
        cin>>x;
    }
    void disp_x(){
        cout<<"x="<<x;
    }
};
class B:A{
    public:
    void set(){
        cout<<"enter x";
        set_x();
        cout<<"enter value for y and z";
        cin>>y>>z;
    }
    void disp(){
        disp_x();
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
};
int main(){
    B obj1;
    obj1.set();
    obj1.disp();
}
