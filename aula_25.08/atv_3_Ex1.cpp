#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

float calculaDelta(float a, float b, float c){
    float delta=0;
    delta = (b*b) - (4*a*c);
    return delta;
}

int main() {
    float res, x1, x2, a, b, c;
    cout << "Insira os valores de a, b e c para calcular as raízes: " << endl;
    cout << "a: ";
    cin >> a;
    if(a == 0){
        cout << "A = 0, logo não há função";
        return 0;
    }
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    res = calculaDelta(a,b,c);

    if (res < 0){
        cout << "Delta negativo, não há raízes";
        return 0;
    }

    x1 = ((-b) + sqrt(res)) / 2*a;
    x2 = ((-b) - sqrt(res)) / 2*a;

    cout << setprecision(2) << "A 1° raíz é: " << x1 << endl;
    cout << setprecision(2) << "A 2° raíz é: " << x2 << endl;
    return 0;
}
