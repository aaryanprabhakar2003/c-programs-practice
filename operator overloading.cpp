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
    c1.disp();//display c1 value
    c2.disp();//display c2 value
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
    c1.disp();// display c1 value by 1
    c2.disp();//display c2 value by 1
};*/

/*class counter{
    int count;
    public:
    counter()
    {count=0;}
    void operator ++()//post-increment
    {count++;}
    void operator --()//post-decrement
    {count--;}
    void disp()
    {cout<<count<<endl;}
};
int main(){
    counter c1,c2;
    c1.operator ++();//increment c1 value by 1
    c2.operator --();//decrement c2 value by 1
    c1.disp();//display c1 value
    c2.disp();// disp c2 value by 1
}*/

class counter{
    int count;
    public:
    counter()
    {count=0;}
    counter operator ++(){
        counter temp;
        temp.count=++count;
        return temp;
    };
    counter operator ++(int){
        counter temp;
        temp.count=count++;
        return temp;
    }
    counter operator --(){
        counter temp;
        temp.count=--count;
        return temp;
    }
    counter operator --(int){
        counter temp;
        temp.count=count--;
        return temp;
    }
    void disp()
    {cout<<count<<endl;}
};
int main(){
    counter c1,c2;
    //c1.operator ++();
    c1.operator --();
    c2.operator ++();
    c2.operator ++();
    
    c1.disp();
    c2.disp();
    c2.disp();
}
