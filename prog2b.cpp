// Prog2b

#include <iostream>
using namespace std;

int main () {
    int numDays;
    cout << "I can tell you how many days were in February! Enter a year: " << endl;
    cin >> numDays;
    
    if ((numDays % 100 == 0) && (numDays % 400 == 0))
        cout << "In " << numDays << ", February has 29 days" << endl;
    else if ((numDays % 100 != 0) && numDays % 4 == 0)
        cout << "In " << numDays << ", February has 29 days" << endl;
    else
        cout << "In " << numDays << ", February has 28 days" << endl;
        
    return 0;
}
