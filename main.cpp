/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>


using namespace std;

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    char sair = 's';
    string nomes[5]; 

   
    for (int i = 0; i < 5; i++) {
        cout << "Fala o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

   
    while (sair == 's') {
        
   
        for (int i = 4; i >= 0; i--) {
            cout << nomes[i] << "\n";
        }

       
        cout << "\nDeseja repetir? (s/n): ";
        cin >> sair;
    }

    return 0;
}

