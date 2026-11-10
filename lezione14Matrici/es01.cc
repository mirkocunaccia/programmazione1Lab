#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;


const int N_ROW = 3;
const int N_COL = 4;


void stampa(int m[][N_ROW], int nCol) {
    for (int i = 0; i < nCol; i++) {
        cout << "riga numero " << (i);

        for (int j = 0; j < N_ROW; j++) {
            cout << "  " <<  *(*(m+i) + j);
        }

        cout << endl;
    }
}

void stampaPuntMatrice (int ** pMatrice, int nRow, int nCol) {

    for (int i = 0; i<nCol; i++){

        cout << "riga numero " << (i);
        for (int j = 0; j<nRow; j++) {
            cout << "   " << (*(*(pMatrice+i) + j));
        }
        cout << endl;
    }

}





int main () {

    srand(time(NULL));
 

    int matrice [N_COL][N_ROW];

    for (int i = 0; i<N_COL; i++) {
        for (int j = 0; j<N_ROW; j++){
            *(*(matrice + i) + j) = rand() % 101;
        }
        
    }

    stampa (matrice, N_COL);

    cout << "FUNZIONE STAMPA PUNT MATRICE" << endl;

    int *matricePunt[N_COL];

    for (int i = 0; i<N_COL; i++){
    
        *(matricePunt + i) = *(matrice+i);
        
    }

    stampaPuntMatrice(matricePunt, N_ROW, N_COL);
    return 0;
}