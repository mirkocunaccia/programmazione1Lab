#include <iostream>
using namespace std;

int main () {
    int secIn;
    
    cout << "Inserisci i secondi da mezzanotte" << endl;
    cin >> secIn;

    int sec = secIn % 60;
    int ore = (secIn / 3600);
    int minuti = (secIn/60 - ore*60);

    cout << "i sec sono: " << sec << endl;
    cout << "i minuti sono: " << minuti << endl;
    cout << "le ore sono: " << ore << endl;

    

}