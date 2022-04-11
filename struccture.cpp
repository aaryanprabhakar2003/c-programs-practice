#include <iostream>
using namespace std;
struct student{
    char name[20];
    int roll_no;
    float marks;
};

int main(){
    student s1;
    student s2;
    cout<<"enter details for the 1st student"<<endl;
    cin>>s1.name;
    cin>>s1.roll_no;
    cin>>s1.marks;
    cout<<"enter details for the 2nd student"<<endl;
    cin>>s2.name;
    cin>>s2.roll_no;
    cin>>s2.marks;
    /*cout<<s1.name<<endl;
    cout<<s1.roll_no<<endl;
    cout<<s1.marks<<endl;*/
    if(s1.marks>s2.marks){
        cout<<s1.name<<" has more marks than "<<s2.name<<endl;
    }
    else{
        cout<<s2.name<<" has more marks than "<<s1.name<<endl;
    }

}
