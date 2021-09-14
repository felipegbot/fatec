#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float n1, n2, media;
    int loop;

    do{
        cout << "Insira as duas notas do aluno:" << endl;
        cout << "Nota 1: ";
        cin >> n1;
        cout << "Nota 2: ";
        cin >> n2;

        media = (n1+n2)/2;

        if(media >= 6){
            cout << "Aluno aprovado\n";
        }else if (media < 3){
            cout << "Aluno reprovado\n";
        }else {
            cout << "Aluno precisa de exame\n";
        }

        cout << "Deseja inserir as notas de outro aluno? 1 para sim, 2 para não: ";
        cin >> loop;
    } while(loop == 1);

    return 0;
}