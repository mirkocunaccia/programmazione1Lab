#include <iostream>
using namespace std;

int main () {
    int a = 0;
    int b = 0;
    int max = 0;
    int min = 0;

    cout << "inserire il valore di A";
    cin >> a;
    cout << "inserire il valore di B";
    cin >> b;

    max = (a>b) * a + (b>a) * b;
    min = (a+b) - max;
    cout << "massimo: " <<max<<endl;
    cout << "minimo: " <<min<<endl;
    return 0;
}