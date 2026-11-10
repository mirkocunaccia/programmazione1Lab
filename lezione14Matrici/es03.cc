#include <iostream> 
#include <stdlib.h>
#include <ctime>

using namespace std;

const int RIGHE = 4;
const int COLONNE = 4; 

void stampa (int m[][COLONNE]) {

    for (int i = 0; i<RIGHE; i++) {
        for (int j = 0; j<COLONNE; j++) {
            cout << "    " << *(*(m + i) + j);
        }
        cout << endl;
    }

}

int calcolaTriangolo (int m[][COLONNE]) {
    int somma = 0;
    
    for (int i = 0; i<RIGHE; i++) {
        for (int j = COLONNE-1; j>i-1; j--) {
            cout << *(*(m+i) + j);
            somma += *(*(m+i) + j);
        }
    }

    return somma;
}


int main () {
    int somma = 0;


    srand(time(NULL));

    int matrice [RIGHE][COLONNE];

    for (int i = 0; i<RIGHE; i++) {
        for (int j = 0; j<COLONNE; j++) {
            *(*(matrice + i) + j) = rand () % 10;
        }
    }

    cout << "matrice iniziale" <<endl;
    stampa(matrice);

    somma = calcolaTriangolo(matrice);
    cout << "somma triangolo superiore dx:  " << somma;

    





    



    return 0;
}