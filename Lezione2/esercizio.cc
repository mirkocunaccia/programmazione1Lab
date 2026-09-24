#include <iostream>
using namespace std;

int main () {
    char carattere;
    cout << "inserire un carattere minuscolo "<< endl;
    cin >> carattere;
    carattere -= ('a' - 'A');
    cout << "carattere convertito in maiuscolo: " << carattere << endl;

    char carattere2;
    cout << "inserire un carattere maiuscolo " << endl;
    cin >> carattere2;
    carattere2 += ('a' - 'A');
    cout << "carattere convertito in minuscolo: " << carattere2 << endl; 
}