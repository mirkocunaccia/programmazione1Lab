#include <iostream> 
using namespace std;

int main () {

    //dichiarazione variabili
    int a = 0;
    int b = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;

    //riferimento ad a
    int &r = a;
    
    //puntatore ad a
    int *pa = &a;
    int *pb = &b;

    //puntatore a puntatore
    int **ppa = &pa;

    //puntatore a costante 
    const int *pca = &a;
    
    cout << "inserire i valori di a e b";
    cin >> a >> b;

    cout << "hai inserito i valori: " << *pa << " " << *pb << endl;
    cout << "i puntatori pa e pb valgono: " << pa << " " << pb << endl; 
    cout << "il valore puntato da pca vale: " << *pca << endl;
    cout << "il valore della variabile puntata dal puntatore al quale punta ppa" <<**ppa << endl;

    c1 = *pa;
    c2 = **ppa;
    c3 = *pca;
    c4 = r;

    cout << "c1 " << c1 <<endl;
    cout << "c2 " << c2 <<endl; 
    cout << "c3 " << c3 <<endl;
    cout << "c4 " << c4 <<endl;

    a+= 3;
    *pa += 3;
    **ppa += 3;
    r+= 3;

    //a varrà a + 3 + 3 + 3 + 3;
    cout << "a: " << a <<endl;

    a = c1; //in teoria non cambia nulla
    pa = pb; //ora il puntatore pa punterà alla variabile b

    a+= 3;
    *pa += 3; //cosi facendo ora incremento b
    **pa += 3: //anche in questo caso vado ad incrementare b 
    r+= 3;

    return 0;
}