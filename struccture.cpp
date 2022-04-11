#include <iostream>
using namespace std;
struct student{
    char name[20];
    int roll_no;
    float marks;
};

int main(){
    student s1;
    cout<<"enter details for the student";
    cin>>s1.name;
    cin>>s1.roll_no;
    cin>>s1.marks;
    cout<<s1.name<<endl;
    cout<<s1.roll_no<<endl;
    cout<<s1.marks<<endl;


}
