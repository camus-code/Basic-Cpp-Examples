// Prog2d

#include <iostream>
using namespace std;


int main() {
    double waveLength;
    cout << "I can help identify radiation types from electromagnetic waves! Enter the wavelength in meters (decimal or scientific notation): " << endl;
    cin >> waveLength;
    
    //Gamma
    if (waveLength <= .00000000001)
        cout << "That is Gamma radiation!" << endl;
    //Xray
    else if (waveLength > .00000000001 && waveLength <= 0.00000001)
        cout << "That is X-Ray radiation!" << endl;
    //Ultraviolet
    else if (waveLength > 0.00000001 && waveLength <= 0.0000004)
        cout << "That is Ultraviolet radiation!" << endl;
    //Visible Light
    else if (waveLength > 0.0000004 && waveLength <= 0.0000007)
        cout << "That is Visible Light radiation!" << endl;
    //Infrared
    else if (waveLength > 0.0000007 && waveLength <=  0.001)
        cout << "That is Infrared radiation!" << endl;
    //Microwaves
    else if (waveLength >  0.001 && waveLength <= 0.01)
        cout << "That is Microwave radiation!" << endl;
    //Radio Waves
    else
        cout << "That is Radio Wave radiation!" << endl;
    

    return 0;
    
    
}

