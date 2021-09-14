#include <iostream> 
#include <cctype>
using namespace std;

int main() {
    char flag;
    int qtdPessoas=0;
    float peso, altura, IMC;
    float somaPeso=0, somaAltura=0, somaIMC=0;
    float maiorPeso=0, maiorAltura=0, maiorIMC=0;
    float menorAltura, menorPeso, menorIMC;
    float mediaPeso, mediaAltura, mediaIMC;

    do{
    cout << "Insira o peso: ";
    cin >> peso;
    cout << "Insira a altura: ";
    cin >> altura;
    IMC = peso/(altura*altura);

    somaPeso += peso;
    somaAltura += altura;
    somaIMC += IMC;

    if(qtdPessoas == 0){
        menorPeso = peso;
        menorAltura = altura;
        menorIMC = IMC;
    }

    if(peso < menorPeso) 
        menorPeso = peso;
    if(peso > maiorPeso) 
        maiorPeso = peso;
    if(altura < menorAltura)
        menorAltura = altura;
    if(altura > maiorAltura)
        maiorAltura = altura;
    if(IMC > maiorIMC)
        maiorIMC = IMC;
    if(IMC < menorIMC)
        menorIMC = IMC;
    
    qtdPessoas++;

    cout << "Deseja inserir mais alguma pessoa? [S/N]: ";
    cin >> flag;
    } while (toupper(flag) == 'S');
    
    mediaAltura = somaAltura / qtdPessoas;
    mediaPeso = somaPeso / qtdPessoas;
    mediaIMC = somaIMC / qtdPessoas;

    cout << "-----------------------" << endl;
    cout << "RESULTADOS:" << endl << endl;
    cout << "Maior Peso -> " << maiorPeso << endl;
    cout << "Menor Peso -> " << menorPeso << endl;
    cout << "Maior Altura -> " << maiorAltura << endl;
    cout << "Menor Altura -> " << menorAltura << endl;
    cout << "Maior IMC -> " << maiorIMC << endl;
    cout << "Menor IMC -> " << menorIMC << endl << endl;
    cout << "Media dos Pesos -> " << mediaPeso << endl;
    cout << "Media das Alturas -> " << mediaAltura<< endl;
    cout << "Media dos IMCs -> " << mediaIMC << endl;
    cout << "-----------------------" << endl;


    return 0;
}