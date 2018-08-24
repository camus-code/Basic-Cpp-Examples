// Prog1c


#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    float firstNumber;
    float secondNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second mumber: ";
    cin >> secondNumber;
    
    cout << endl;
    
    float multResult = firstNumber * secondNumber;
    
    cout << "The result of multiplying these two numbers is " << multResult;
    
    cout << endl;
    
    return 0;

}
