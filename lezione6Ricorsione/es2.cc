#include <iostream>
using namespace std;

void ricorsione (int n) {
    int ris = 0;
    if (n == 1) {
        cout << "1";
    } else if (n%2 == 0) {
        ricorsione(n/2);
        cout << "0";
    } else {
        ricorsione(n/2);
        cout << "1";
    }
}

int main () {
    int n = 0;

    cout << "inserire intero";
    cin >> n; 

    ricorsione(n);

    return 0;
}


