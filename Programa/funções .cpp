#include <iostream>
#include <locale.h>
using namespace std;

void Enviardinheiro(int saldo)
{
    int enviar = 0;

    if (enviar > saldo) {
        cout << "Saldo insuficiente!\n";
    }
    else {
        saldo -= enviar;
        cout << "Envio realizado com sucesso!\n";
    }
    cin.ignore();
    cin.get();
    
}

void Enviardinheiro(int deposito) {
    int saldo;

    if (deposito >= 2000) {
        cout << "Cuidado para não afundares o banco com tanto dinheiro!\n";
    }

    saldo += deposito;
    cout << "Depósito realizado!\n";
    cin.ignore();
    cin.get();

}
void Enviardinheiro(int debito) {
    int saldo;
    if (debito > saldo) {
        cout << "O Débito é superior ao saldo!\n";
    }
    else {
        saldo -= debito;
        cout << "Débito realizado!\n";
    }
    cin.ignore();
    cin.get();
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int resposta = -1;
    int deposito = 0;
    int debito = 0;
    int enviar = 0;
    int saldo = 1000;
   

    cout << "Deseja iniciar? digite a senha: ";
    cin >> resposta;

    if (resposta != 12345) {
        cout << "Programa encerrado.\n";
        return 0;
    }

    do {
        system("cls");

        cout << "\n------------------ Menu ------------------\n";
        cout << "1 - Verificar Saldo\n";
        cout << "2 - Enviar Dinheiro\n";
        cout << "3 - Depósito\n";
        cout << "4 - Débito\n";
        cout << "0 - Sair\n";
        cout << "------------------------------------------\n";
        cout << "Escolha uma opção: ";
        cin >> resposta;

        switch (resposta) {

        case 1:
            system("cls");
            cout << "\n------ Verificação de Saldo ------\n";
            cout << "Saldo atual: " << saldo << " \n";
            cin.ignore();
            cin.get();
            break;

        case 2:
            system("cls");
            cout << "\n------ Enviar Dinheiro ------\n";
            cout << "Valor a enviar: ";
            cin >> enviar;
            Enviardinheiro(saldo);

            
            break;

        case 3:
            system("cls");
            cout << "\n------ Depósito ------\n";
            cout << "Valor a depositar: ";
            cin >> deposito;
            Enviardinheiro(deposito);
          
            break;

        case 4:
            system("cls");
            cout << "\n------ Débito ------\n";
            cout << "Valor do débito: ";
            cin >> debito;
            Enviardinheiro(debito);
            break;

        case 0:
            cout << "A sair...\n";
            break;

        default:
            cout << "Opção inválida!\n";
            cin.ignore();
            cin.get();
            break;
        }

    } while (resposta != 0);

    return 0;
}

