#include <iostream>
using namespace std;

int main () {
    int a = 0;
    int b = 0;
    int valore_assoluto = 0;

    cout << "inserire il valore di A";
    cin >> a;
    cout << "inserire il valore di B";
    cin >> b;

    valore_assoluto = (a - b)*((a<b) - (b<a));

    cout << "valore assoluto: " << endl; 

    return 0;
}