#include <iostream>
#include <cmath>
using namespace std;

float distanzaPunti (float,float,float,float);

int main () {
    float ax, ay, bx, by, distanza;
    cout << "inserire x e y di a";
    cin >> ax >> ay;

    cout << "inserire x e y di b";
    cin >> bx >> by;

    distanza = distanzaPunti (ax,ay,bx,by);

    cout << "distanza: " << distanza;


    return 0;
}

float distanzaPunti (float ax, float ay, float bx, float by) {
    float distanza;
    distanza = sqrt(pow((bx - ax), 2) + pow((by - ay),2));
    return distanza;
}