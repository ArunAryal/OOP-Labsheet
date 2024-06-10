// Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.
#include <iostream>
using namespace std;

// Function to get a reference to the larger of the two numbers
float& larger(float& a, float& b) {
    return (a > b) ? a : b;
}

int main() {
    float temp1, temp2, newValue;
    
    cout << "Enter the first temperature: ";
    cin >> temp1;
    cout << "Enter the second temperature: ";
    cin >> temp2;
    
    cout << "Enter the new value to set: ";
    cin >> newValue;
    
    larger(temp1, temp2) = newValue;
    
    cout << "Updated temperatures:\n";
    cout << "Temperature 1: " << temp1 << endl;
    cout << "Temperature 2: " << temp2 << endl;
    
    return 0;
}

 