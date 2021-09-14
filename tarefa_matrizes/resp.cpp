#include <iostream> 
#include <iomanip>
using namespace std;
const int TAM = 4;

void carregaMatriz(int matriz[TAM][TAM]) {
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            cout << "Insira o valor na linha " << i+1 << " e coluna " << j+1 << ": ";
            cin >> matriz[i][j];
        }
    }
}

void exibeMatriz(int matriz[TAM][TAM]){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            cout << setw(3) << " | " << setw(3) << matriz[i][j] << setw(3) ;
        }
        cout << " | \n" << setw(3) ;
    }
}

int somaElemDiagSec(int matriz[TAM][TAM]){
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i + j == 3){
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int qtdNumParDiagSec(int matriz[TAM][TAM]){
    int qtd = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i + j == 3){
                if(matriz[i][j] % 2 == 0){
                    qtd ++;
                }
            }
        }
    }
    return qtd;
}

int somaNumImpDiagPrin(int matriz[TAM][TAM]){
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i == j){
                if(matriz[i][j] % 2 != 0){
                    soma += matriz[i][j];
                }
            }
        }
    }
    return soma;
}

int difSomaDiagPrinPelaSomaDiagSec(int matriz[TAM][TAM]){
    int soma_diagP = 0, soma_diagS = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if( i == j){
                soma_diagP += matriz[i][j];
            }
            if(i + j == 3){
                soma_diagS += matriz[i][j];
            }
        }
    }
    return soma_diagP - soma_diagS;
}

int main() {

    int mat[TAM][TAM], valor, escolha;
    
    carregaMatriz(mat);
    system("cls");

    while(true){
        cout << " ------------------- MENU -------------------\n";
        cout << "[0] --> Inserir novamente a matriz 4x4.\n";
        cout << "[1] --> Exibir a matriz carregada.\n";
        cout << "[2] --> Somatoria dos elementos da diagonal secundaria.\n";
        cout << "[3] --> Quantidade de numeros pares da diagonal secundaria.\n" ;
        cout << "[4] --> Somatoria dos numeros impares da diagonal principal.\n" ;
        cout << "[5] --> Diferenca da somatoria da diagonal principal pela somatoria da diagonal secundaria.\n" ;
        cout << "[9] --> Sair do programa.\n" ;
        cout << " --------------------------------------------\n";
        fflush(stdin);
        cout << "Escolha uma das opcoes acima: ";
        cin >> escolha;
        system("cls");


        switch (escolha){
        case 0: carregaMatriz(mat); break;
        case 1: exibeMatriz(mat); break;
        case 2: cout << "A soma dos elementos da diagonal secundaria eh: " << somaElemDiagSec(mat) << endl; break;
        case 3: cout << "A quantidade de numeros pares na diagonal secundaria eh: " << qtdNumParDiagSec(mat) << endl; break;
        case 4: cout << "A soma de numeros impares na diagonal principal eh: " << somaNumImpDiagPrin(mat) << endl; break;
        case 5: cout << "a diferenca da soma da diagonal Principal pela Secundaria eh: " << difSomaDiagPrinPelaSomaDiagSec(mat) << endl; break;
        case 9: return 0;
        default: cout << "Operacao invalida\n";
        }
    }

}


