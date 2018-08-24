// Prog2a

#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2;
    cout << "Enter two primary colors and I will mix them for you: (lowercase) " << endl;
    cin >> color1 >> color2;
    
    //green
    if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue"))
        cout << "You made green!\n";
    //orange
    else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red"))
        cout << "You made orange!\n";
    //purple
    else if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red"))
        cout << "You made purple!\n";
    //error
    else
        cout << "Error: Invalid colors" << endl;

    return 0;
}
