//Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function
#include<iostream>
using namespace std;

typedef struct date{
    int day;
    int month;
    int year;
}dat;

void display(dat d){
 cout<<"Entered Date is "<<d.month<<"/"<<d.day<<"/"<<d.year;
}

int main() {
    dat d;
    cout<<"Enter Year:\t";
    cin>>d.year;
    cout<<"Enter Month:\t";
    cin>>d.month;
    cout<<"Enter Day:\t";
    cin>>d.day;
    display(d);
    return 0;
}