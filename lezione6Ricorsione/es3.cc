#include <iostream> 
using namespace std;

int sommaCifre (int n) {
    int somma = 0;
    if (n == 0) {
        return somma;
    } else {
        somma = n%10 + sommaCifre(n/10);
    }
    return somma;
}


int main () {

    int n = 0, somma = 0;
    cout << "inserire un numero intero";
    cin >> n;

    if (n<0) {
        n = -n;
    }
    
    somma = sommaCifre(n);

    cout << "somma cifre: " << somma;

    return 0;
}