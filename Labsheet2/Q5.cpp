// Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.
#include<iostream>
using namespace std;
inline void  netsalary(float a){
     cout<<"The updated salary of employee is"<<a-(0.1*a)<<endl; 
}
int main(){
    float salary;
    cout<<"Enter the salary of employee"<<endl;
    cin>>salary;
    netsalary(salary);
    return 0;
}