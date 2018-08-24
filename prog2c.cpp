// Prog2c

#include <iostream>
using namespace std;

int main() {
    double time1, time2, time3;
    string name1, name2, name3;
    cout << "Enter the names of three runners and their finishing times (Separate with return key): " << endl;
    cin >> name1 >> time1 >> name2 >> time2 >> name3 >> time3;
    
    //error
    if (time1 <= 0 || time2 <= 0 || time3 <= 0)
        cout << "Invalid race times. Try again." << endl;
    //123
   else if (time1 <= time2 && time2 <= time3)
        cout << name1 << ": First\n" << name2 << ": Second\n" << name3 << ": Third\n";
    //132
    else if (time1 <= time3 && time3 <= time2)
        cout << name1 << ": First\n" << name3 << ": Second\n" << name2 << ": Third\n";
    
    //231
    else if (time2 <= time3 && time3 <= time1)
        cout << name2 << ": First\n" << name3 << ": Second\n" << name1 << ": Third\n";
    //213
    else if (time2 <= time1 && time1 <= time3)
        cout << name2 << ": First\n" << name1 << ": Second\n" << name3 << ": Third\n";
    
    //312
    else if (time3 <= time1 && time1 <= time2)
        cout << name3 << ": First\n" << name1 << ": Second\n" << name2 << ": Third\n";
    //321
    else if (time3 <= time2 && time2 <= time1)
        cout << name3 << ": First\n" << name2 << ": Second\n" << name1 << ": Third\n";
    

    return 0;

}

