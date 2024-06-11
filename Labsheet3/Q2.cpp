// Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.
#include<iostream>
#include<math.h>
using namespace std;

class Prime{
    int num;

    public:
    void IsPrime(){
        int f=0;
        cout<<"Enter a number"<<endl;
        cin>>num;
        for (int i = 2; i < sqrt(num); i++)
        {
            if(num%i==0)
            {
             f++;
             break;
            }

        }
        if(f==0)
            cout<<"prime"<<endl;
        else
        cout<<"not prime"<<endl;
    }

    void choice(){
    char c;
    while (1)
    {    
    cout<<"Enter y if you want to continue and n if you want to exit"<<endl;
    cin>>c;
    if(c=='n')
    break;
    IsPrime();
    }
    }
};

int main() {
    Prime o1;
    o1.IsPrime();
    o1.choice();
    return 0;
}