// Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.

#include<iostream>
using namespace std;

void converter(){
    int a=20;
    cout<<"From no argument function,"<<endl;
    cout<<a<<" Feet = "<<a*12<<" inches"<<endl<<endl;
}

void converter(int a){
    cout<<"From 1 argument function,"<<endl;
    cout<<a<<" Feet = "<<a*12<<" inches"<<endl<<endl;
}

void converter(int a, int& b){
    cout<<"From 2 argument function,"<<endl;
    cout<<a<<" Feet = "<<a*12<<" inches"<<endl;
    cout<<b<<" Feet = "<<b*12<<" inches"<<endl<<endl;
}

int main() {
    int x=10, y=15;
    converter();
    converter(x);
    converter(x,y);
    return 0;
}