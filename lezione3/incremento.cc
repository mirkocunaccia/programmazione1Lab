#include <iostream>
using namespace std;

int main () {
    int a = 0;

    cout << "inserire un numero";
    cin >> a;

    cout << "precedente: " << --a << endl;
    cout << "successivo: " << ++++a << endl; 


    return 0;
}