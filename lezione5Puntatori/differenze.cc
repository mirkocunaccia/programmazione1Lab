#include <iostream>
using namespace std;

float trova_minimo (float a, float b, float c) {
    float minimo = 0.0;

    if (a<b && a<c) {
        minimo = a;
    } else if(b<a && b<c) {
        minimo = b;
    } else {
        minimo = c;
    }
    
    return minimo;
}

float trova_massimo (float a, float b, float c) {
    float massimo = 0.0;
    
    if (a>b && a>c) {
        massimo = a;
    } else if(b>a && b>c) {
        massimo = b;
    } else {
        massimo = c;
    }
    
    return massimo;
}

float trova_differenza (float max, float min) {
    return max - min;
}


int main () {
    float a, b, c, diff;

    cout << "inserire tre numeri" <<endl;
    cin >> a >> b >> c;

    diff = trova_differenza(trova_massimo(a,b,c), trova_minimo(a,b,c));
    cout << "differenza: " << diff;
    return 0;
}

