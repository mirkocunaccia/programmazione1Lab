#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void stampa (int *m, const int dim) {

    cout << "array:";

    for (int i = 0; i<dim; i++) {
        cout << " " << *(m + i);
    }

}

int main () {
    const int dim = 10;
    int arr [dim];
    
    srand(time(NULL));

    for (int i = 0; i<dim; i++){
        *(arr+i) = rand () % 101;
    }

    stampa (arr, dim);

    return 0;
}

