#include <iostream>
using namespace std;

int calcolaAssegnamenti (int v[], const int dim, int x, int y) {
    int assegnamenti = 0;

    if (y-x < 0) {
        return -1;
    }

    for (int i = 0; i<dim; i++) {
        if (v[i] <= x || v[i] >= y) {
            v[i] = 0;
            assegnamenti++;
        }
    }


    return assegnamenti;

}

void stampaArray (int v [], const int dim) {
    cout << "array: [ ";
    for (int i = 0; i<dim; i++) {
        cout << v[i] << " ";
    }
    cout << "]";
}



int main () {
    const int dim = 10;
    int ass = 0;
    int v [] = {3,4,12,4,15,6,2,16,5,1};
    
    ass = calcolaAssegnamenti(v,dim,2,11);
    if (ass == -1) {
        cout << "intervallo non valido"<<endl;
    } else {
       cout << "assegnamenti: " << ass <<endl;
    }

    stampaArray(v,dim);

    return 0;
    
}