#include <iostream>
using namespace std;

int main () {
    int a = 0;
    int b = 0;
    bool confronto = 0;

    cout << "inserire un primo numero";
    cin >> a;

    cout << "inserire un secondo numero";
    cin >> b;

    confronto = (a<b) + (a>b);
    confronto = !confronto;

    cout << "uguali" << (int)confronto;




}