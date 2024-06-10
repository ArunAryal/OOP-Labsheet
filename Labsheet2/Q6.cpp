// Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
// Chief executive officer Rs. 35000/m
// Information officer Rs. 25000/m
// System analyst Rs. 24000/m
// Programmer Rs. 18000/m
// Make a function that takes two arguments; one salary and the other increment. Use proper default argument.

#include<iostream>
using namespace std;
float updatedsalary(float a, int b=12){

    return a+(float)b/100*a;
}
int main(){
    float CEO=35000 ;
    float IO=25000;
    float SA=24000;
    float P=18000;
    int p1=9;
    int p2=10;
    cout<<"The updated salary of chief executive officer is"<<updatedsalary(CEO,p1)<<endl;
    cout<<"The updated salary of information officer is"<<updatedsalary(IO,p2)<<endl;
    cout<<"The updated salary of system analyst is"<<updatedsalary(SA)<<endl;
    cout<<"The updated salary of programmer is"<<updatedsalary(P)<<endl;

    return 0;
}