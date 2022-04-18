#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void setvalue(int i)
    {a=i;}
    friend float mean(A,B);
    friend int max(A,B);
    friend int min(A,B);
};
class B{
    int b;
    public:
    void setvalue(int j)
    {b=j;}
    friend float mean(A,B);
    friend int max(A,B);
    friend int min(A,B);
};
float mean(A obj1,B obj2)
{
    float r;
    r=( obj1.a+ obj2.b)/2;
    return r;

};
int max(A obj1,B obj2){
    int res;
    if(obj1.a>obj2.b){
        cout<<"A is maximum"<<endl;
    }
    else{
        cout<<"B is maximum"<<endl;
            };
     return res;
};
int min(A obj1,B obj2)
{
    int result;
    if (obj1.a>obj2.b){
        cout<<"B is minimum"<<endl;
    }
    else{
        cout<<"A is minimum"<<endl;
    }
    return result;
};
int main(){
    A obj1;
    B obj2;
    obj1.setvalue(40);
    obj2.setvalue(20);
    cout<<mean(obj1,obj2)<<endl;
    cout<<max(obj1,obj2)<<endl;
    cout<<min(obj1,obj2)<<endl;

}