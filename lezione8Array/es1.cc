#include <iostream>
#include <stdlib.h>
#include <ctime>


using namespace std;

/*Scrivere una procedura C++ che, presi come parametri un array di numeri interi, la sua dimensione e un altro numero intero, inizializzi l’array con valori random, il cui massimo sia il terzo parametro. Scrivere poi una
procedura C++ che stampi a video tutti gli elementi di un array di numeri interi ricevuto come parametro insieme alla sua dimensione. Scrivere una funzione C++ che permetta, ricevuti come parametri due array di interi e la loro dimensione (la stessa per entrambi), conti quante volte gli elementi con lo stesso indice sono uguali. Si scriva, infine, un programma che testi le funzioni suddette.*/


void inizializzaArray (int v [], const int dim, int max) {
    for (int i = 0; i<dim; i++) {
        v[i] = rand() % (max+1); 
    }
}

void stampaArray (int v [], const int dim) {
    cout << "array: [ ";
    for (int i = 0; i<dim; i++) {
        cout << v[i] << " ";
    }
    cout << "]";
}

int calcolaUguali (int v1 [], int v2[], const int dim) {
    int uguali = 0;
    for (int i = 0; i<dim; i++) {
        if (v1[i] == v2[i]) {
            uguali++;
        }
    } 

    return uguali;
}


int main () {
    srand(time(NULL)); //per generare numeri diversi ogni volta
    const int dim = 10;
    int uguali = 0;
    int v1 [dim];
    int v2 [dim];
    inizializzaArray(v1,dim,20);
    inizializzaArray(v2,dim,20);
    stampaArray(v1,dim);
    stampaArray(v2,dim);

    uguali = calcolaUguali(v1,v2,dim);
    cout << "elementi uguali: " << uguali;



    return 0;
}