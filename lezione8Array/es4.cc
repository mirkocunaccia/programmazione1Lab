#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void inizializzaArray (int v[], const int dim) {
    for (int i = 0; i<dim; i++) {
        v[i] = rand() % 10;
    }
}

void stampaArray (int v [], const int dim) {
    cout << "array: [ ";
    for (int i = 0; i<dim; i++) {
        cout << v[i] << " ";
    }
    cout << "]";
}

void invertiArray (int v[], const int dim) {
    for (int i = 0; i<dim/2; i++) {
        int appoggio = v[i];
        v[i] = v [dim-i-1];
        v[dim-i-1] = appoggio;
    }

}


int main () {
    srand(time(NULL));
    const int dim = 11;
    int v [dim];
    
    inizializzaArray(v,dim);
    stampaArray(v,dim);

    invertiArray(v,dim);
    stampaArray(v,dim);

    return 0;
}
