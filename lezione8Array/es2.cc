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

double calcoli (int v[], int dim, int &max, int &min) {
    double media = 0;
    max = v[0];
    min = v[0];
    
    for (int i = 0; i<dim; i++) {
        if (max<v[i]) {
            max = v[i];
        }
        if (min>v[i]) {
            min = v[i];
        }
        media += v[i];
    };

    return media/dim;

}

int main () {
    srand(time(NULL));
    const int dim = 10;
    int max = 0, min = 0;
    double media = 0;
    int v [dim];
    

    inizializzaArray(v,dim);
    stampaArray(v,dim);

    media = calcoli(v, dim, max, min);
    cout << "Media: " << media;
    cout << "Max: " << max;
    cout << "Min: " << min;
    


    return 0;
}
