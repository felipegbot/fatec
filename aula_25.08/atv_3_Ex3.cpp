#include <iostream> 
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
    float nota, acumulador=0, contador=0;
    char flag;

    do{
        cout << "Insira a nota: ";
        cin >> nota;

        acumulador += nota;
        contador++;

        cout << "Deseja inserir outra nota? ";
        cin >> flag;

    }while(toupper(flag) == 'S');
    
    cout << "Foram inseridas " << contador << " notas\n";
    cout << "A somatória de todas as notas foi: " << acumulador << endl;
    cout << setprecision(2) << "A média portanto, é: " << acumulador/contador << endl;

    return 0;
}