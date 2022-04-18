#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void setvalue(int i)
    {a=i;}
    friend float mean(A,B);
};
class B{
    int b;
    public:
    void setvalue(int j)
    {b=j;}
    friend float mean(A,B);
};
float mean(A obj1,B obj2)
{
    float r;
    r=( obj1.a+ obj2.b)/2;
    return r;

};
int main(){
    A obj1;
    B obj2;
    obj1.setvalue(10);
    obj2.setvalue(20);
    cout<<mean(obj1,obj2);

}