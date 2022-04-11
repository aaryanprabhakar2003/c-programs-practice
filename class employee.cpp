#include <iostream>
using namespace std;
class employee{
    public:
    char name[20];
    int e_id;
    float salary;
};
int main(){
    employee e1;
    cout<<"enter name of 1st employee"<<endl;
    cin >> e1.name;
    cout<<"enter id of 1st employee"<<endl;
    cin >> e1.e_id;
    cout<<"enter salary of 1st employee"<<endl;
    cin >> e1.salary;
    cout<<"the name of employee is: "<<e1.name<<endl;
    cout<<"the salary of employee is: "<<e1.salary<<endl;
    cout<<"the employee of employee is: "<<e1.e_id<<endl;

}