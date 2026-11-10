#include <iostream> 
#include <stdlib.h>
#include <ctime>

using namespace std;

const int RIGHE = 10;
const int COLONNE = 10; 

void stampa (int m[][COLONNE]) {

    for (int i = 0; i<RIGHE; i++) {
        for (int j = 0; j<COLONNE; j++) {
            cout << "    " << *(*(m + i) + j);
        }
        cout << endl;
    }
}

void filtroMedio (int a[][COLONNE], int b [][COLONNE]) {
    int somma = 0;
    int elementi = 0;

    for (int i = 0; i<RIGHE; i++) {
        for (int j = 0; j<COLONNE; j++) {
            if (i != 0) {
                ++elementi;
                somma += *(*(a + i) + j) //sbagliato --> bisognerebbe sommare l'elemento sopra
            } else if (j != 0) {
                ++elementi;
                somma += 0; //sommare elemento a sx poi fare uguale per j = COLONNE e i = RIGHE
            }
            
        }
        cout << endl;
    }


}




int main () {


    srand(time(NULL));

    int a [RIGHE][COLONNE];
    int b [RIGHE][COLONNE];

    for (int i = 0; i<RIGHE; i++) {
        for (int j = 0; j<COLONNE; j++) {
            *(*(a + i) + j) = rand () % 101;
            *(*(b + i) + j) = *(*(a + i) + j);
        }
    }

    cout << "matrice iniziale A:" <<endl;
    stampa(a);

    cout << "matrice iniziale B:" <<endl;
    stampa(b);






    



    return 0;
}