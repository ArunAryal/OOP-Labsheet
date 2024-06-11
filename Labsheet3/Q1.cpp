// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.
#include<iostream>
using namespace std;

class celsius{
    float temp;

    public:
    float toFehrenheit(){
        float f;
        cout<<"Enter the temp in celsius:\t";
        cin>>temp;
        f=temp*(9.0/5.0)+32;
        cout<<"Temp in fahrenheit is "<<f<<endl;
    }

};

class fahrenheit{
    float temp;

    public:
    float toCelsius(){
        float c;
        cout<<"Enter the temp in fahrenheit:\t";
        cin>>temp;
        c=(temp-32)*5.0/9.0;
        cout<<"Temp in celsius is "<<c<<endl;
    }

};


int main() {
    celsius ob1;
    fahrenheit ob2;
    ob1.toFehrenheit();
    ob2.toCelsius();
    return 0;
}