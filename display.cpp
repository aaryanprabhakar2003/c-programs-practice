#include <iostream>
using namespace std;
class c{
    int x;
    public:
    void setvalue(int i){
    x=i;}
    friend void display();
};
void display(){
    c obj;
    obj.setvalue(20);
    cout<<obj.x;
}
int main(){
    display();
}