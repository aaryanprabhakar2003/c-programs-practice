#include <iostream>
using namespace std;
int main(){
    int add,sub,mul,div,n1,n2,opt,res;
    cout<<"select the option from the menu"<<endl;
    cout<<"1.  addition"<<endl;
    cout<<"2.  subtraction"<<endl;
    cout<<"3. multiplication"<<endl;
    cout<<"4. division"<<endl;
    cin >> opt;
    switch(opt){
    case 1:
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    res=n1+n2;
    cout<<"the sum is:"<<res<<endl;
    break;

    case 2:
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    res=n1-n2;
    cout<<"the subtraction is"<<res<<endl;
    break;
    case 3:
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    res=n1*n2;
    cout<<"the multiplication is"<<res<<endl;
    break;
    case 4:
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    res=n1/n2;
    cout<<"the division is"<<res<<endl;
    break;
    }
}


