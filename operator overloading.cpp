#include <iostream>
using namespace std;
/*class counter{
    int count;
    public:
    counter()
    {count=0;}
    void increment()
    {count++;}
    void decrement()
    {count--;}
    void disp()
    {cout<<count<<endl;}
};
int main(){
    counter c1,c2;
    c1.increment();//increment c1 value by 1
    c2.decrement();// decrement c2 value by 1
    c1.disp();
    c2.disp();
};*/


/*class counter{
    int count;
    public:
    counter()
    {count=0;}
    void operator ++()//pre-increment
    {count++;}
    void operator --()//pre-decrement
    {count--;}
    void disp()
    {cout<<count<<endl;}
};
int main(){
    counter c1,c2;
    c1.operator ++();//increment c1 value by 1
    c2.operator --();//decrement c2 value by 1
    c1.disp();
    c2.disp();
};*/

class counter{
    int count;
    public:
    counter()
    {count=0;}
    void operator ++()
    {count++;}
    void operator --()
    {count--;}
    void disp()
    {cout<<count<<endl;}
};
int main(){
    counter c1,c2;
    c1.operator ++();//increment c1 value by 1
    c2.operator --();//decrement c2 value by 1
    c1.disp();
    c2.disp();
}
