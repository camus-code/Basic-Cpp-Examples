//  prog3a.cpp
//  prog3a
//
// This program uses a function to check if a number between 5 and 50 is prime or not. If
// numbers outside this range are detected, the function returns

#include <stdio.h>
#include <iostream>
using namespace std;

// Function Prototype
bool checkInput(int);
bool checkPrime(int);
void printResult(bool);


int main(){
    int val;
    cout << "Enter a number between 5 and 50 and I will say if it is prime or not:" << endl;
    cin >> val;
    
    if (checkInput(val))
        if (checkPrime(val))
            cout << val << " is a prime number" << endl;
        else
            cout << val << " is NOT a prime number" << endl;
    else
        cout << "Invalid entry. Try again." << endl;
    return 0;
}

//Definition of functon checkInput
//Uses one parameter: number. The function checks to make sure the number falls within the
// range of 5 to 50. If boolean status is true, function continues to checkPrime. If not,
// error mesage occurs

bool checkInput(int number){
    bool status;
    
    if (number < 5 || number > 50)
        status = false;
    else
        status = true;
    return status;
    
}

//Definiton of function checkPrime
//Uses one parameter, number. Function runs for-loop against this number, checking to see if
// it is prime by using a count method. Whenever the count is 2, the number was only divided
// without a remainder twice, therefore making it prime.

bool checkPrime(int number){
    bool status;
    int count = 0;
    
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    if(count==2)
        status = true;
    else
        status = false;
    return status;
}


