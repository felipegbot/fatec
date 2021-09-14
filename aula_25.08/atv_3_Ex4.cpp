#include <iostream> 
#include <math.h>
#include "pt_br.h"
using namespace std;

bool verificaTriangulo(float L1, float L2, float L3){
    bool res;
    if( L1 < (L2 + L3) && L1 > fabs(L2 - L3)){
        res = true;
        return res;
    }
    else if( L2 < (L1 + L3) && L2 > fabs(L1 - L3)){
        res = true;
        return res;
    }
    else if( L3 < (L1 + L2) && L3 > fabs(L1 - L2)){
        res = true;
        return res;
    }else {
        res = false;
        return res;
    }
}

void tipoTriangulo(float L1, float L2, float L3){
    if (L1 == L2 && L2 == L3){
        cout << "O triângulo formado é equilátero\n";
    }else if(L1 == L2 || L1 == L3 || L2 == L3){
        cout << "O triângulo formado é isósceles\n";
    }else{
        cout << "O triângulo formado é escaleno\n";
    }
}

int main() {
    acentos();
    float lado1, lado2, lado3;   
    bool flag;
    cout << "Insira o valor dos 3 lados do triângulo: \n";
    cin >> lado1 >> lado2 >> lado3;
    flag = verificaTriangulo(lado1, lado2, lado3);
    if(flag){
        tipoTriangulo(lado1, lado2, lado3);
    }else{
        cout << "As medidas não formam um triângulo\n";
    }
    return 0;
}