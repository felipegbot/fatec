#include <iostream> 
using namespace std;

int main() {
    const int TAM = 10;
    int i;
    float arr[TAM], temp, maior_t, menor_t, soma_t=0;
    
    for(i = 0; i < TAM; i++){
        cout << "Insira uma temperatura: ";
        cin >> temp;
        arr[i] = temp;

        if(i == 0) menor_t = temp;

        if(temp < menor_t) 
            menor_t = temp;
        if(temp > maior_t)
            maior_t = temp;

        soma_t += temp;
    }

    cout << "----------------" << endl;
    cout << "Maior temperatura -> " << maior_t << endl;
    cout << "Menor Temperatura -> " << menor_t << endl;
    cout << "Media das temperaturas -> " << soma_t / i << endl;
    cout << "----------------" << endl;

    return 0;
}