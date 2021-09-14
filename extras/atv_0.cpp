#include <iostream>
using namespace std;


int verifica_duplicidade(int vet[10]){
    for (int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(vet[i] == vet[j]){
                cout << "Primeira duplicidade encontrada nas posições: " << i+1 << " e " << j+1 << endl;
                return 1;
            }
        }
    }
    return 0;
}


int main(){

    int arr[10], i, elemento, res;

    cout << "Com esse código você irá criar um vetor, depois, ele será escaneado para encontrar alguma duplicidade" << endl;
    for(int i = 0; i < 10; i++){
        cout << "Insira o elemento na " << i + 1 << "° posição: ";
        cin >> elemento;
        arr[i] = elemento;
    }

    res = verifica_duplicidade(arr);

    switch (res)
    {
    case 1:
        cout << "Há duplicidade no vetor\n";
        break;
    
    case 0:
        cout << "Não há duplicidade no vetor\n";
        break;
    }
}