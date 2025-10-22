#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

   

   
    int num1, num2;
    char resultado;

    cout << "o que queres fazer:+,-,X,/";
    cin >> resultado;

    cout << "insira um numero";
    cin >> num1;

    cout << "insira o segundo numero";
    cin >> num2;

  
    switch (resultado) {
      

    case '+':
        cout << "Resultado: " << num1 + num2;
        break;

    case '-':
  
        cout << "Resultado: " << num1 - num2;
        break;

    case 'X':
        cout << "Resultado: " << num1 * num2;
        break;

    case '/':
        if (num2 != 0) {

            cout << "Resultado: " << num1 / num2;
        }
        else {
            cout << "Erro: divisão por zero!" ;
        }
        
    

    } 
    return  0;
}