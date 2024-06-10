// Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.

#include<iostream>
using namespace std;

void converter(){
    float a=20.8;
    cout<<"From no argument function,"<<endl;
    cout<<a<<" Feet = "<<a*12<<" inches"<<endl<<endl;
}

void converter(float a){
    cout<<"From 1 argument function,"<<endl;
    cout<<a<<" Feet = "<<a*12<<" inches"<<endl<<endl;
}

void converter(float a, float& b){
    cout<<"From 2 argument function,"<<endl;
    cout<<a<<" Feet = "<<a*12<<" inches"<<endl;
    b=b*12;
}

int main() {
    float x=10.3, y=15.6, y1=y;
    converter();
    converter(x);
    converter(x,y);
    cout<<y1<<" Feet = "<<y<<" inches"<<endl<<endl;
    return 0;
}