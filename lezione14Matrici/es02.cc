#include <iostream> 
#include <stdlib.h>
#include <ctime>

using namespace std;

const int RIGHE = 3;
const int COLONNE = 4; 

void stampa (int m[][COLONNE], int r) {

    for (int i = 0; i<r; i++) {
        for (int j = 0; j<COLONNE; j++) {
            cout << "    " << *(*(m + i) + j);
        }
        cout << endl;
    }

}

void trasponi (int m[][COLONNE], int t[][RIGHE]) {


    for (int i = 0; i<RIGHE; i++) {
        for (int j = 0; j<COLONNE; j++) {
            *(*(t + j) + i) = m[i][j];
        }
    }

}

void stampaTrasposta (int m[][RIGHE], int c) {

    for (int i = 0; i<c; i++) {
        for (int j = 0; j<RIGHE; j++) {
            cout << "    " << *(*(m + i) + j);
        }
        cout << endl;
    }

}






int main () {


    srand(time(NULL));

    int matrice [RIGHE][COLONNE];
    int trasposta [COLONNE][RIGHE];

    for (int i = 0; i<RIGHE; i++) {
        for (int j = 0; j<COLONNE; j++) {
            *(*(matrice + i) + j) = rand () % 101;
        }
    }

    cout << "matrice iniziale" <<endl;
    stampa(matrice, RIGHE);

    trasponi(matrice, trasposta);

    cout << "matrice trasposta" <<endl;
    stampaTrasposta(trasposta, COLONNE);



    



    return 0;
}