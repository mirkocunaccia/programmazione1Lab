#include <iostream>
using namespace std;
//DA AGGIUNGERCI IL SEGNO E I CONTROLLI NEL MAIN (GESTIRE TUTTO NEL MAIN)
int divisione (int dividendo, int divisore, int &resto, int segno) {
    int quoziente = 0;

    if (dividendo < divisore) {
        resto = dividendo;
    } else if (dividendo == divisore) {
        quoziente = 1;
    } else {
        dividendo = dividendo - divisore;
        quoziente = 1 + divisione (dividendo, divisore, resto);
    }
    return quoziente;
}

int main () {
    int dividendo = 0, divisore = 0, resto = 0;
    cout << "inserire dividendo";
    cin  >> dividendo;

    cout << "inserire divisore";
    cin  >> divisore;

    int quoziente = divisione (dividendo, divisore, resto);

    cout << "quoziente: " << quoziente << endl;
    cout << "resto: " << resto;
    return 0;
}