
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;



int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    string s;
    cin >> s;

    string elementos[1000];
    int quantidades[1000];
    int usados = 0;
    int i, num, j;


    int n = s.size();

    cout << " fala os elementos\n";
    do {


        for (i = 0; i < n; i++) {

            string Elem = "";

            if (isupper(s[i])) {
                Elem += s[i];
                i++;

                while (i < n && islower(s[i])) {
                    Elem += s[i];
                    i++;
                }

                i--;
            }

            else {
                continue;
            }


            num = 0;
            j = i + 1;

            while (j < n && isdigit(s[j])) {
                num = num * 10 + (s[j] - '0');
                j++;
            }

            if (num == 0) num = 1;

            i = j - 1;


            elementos[usados] = Elem;
            quantidades[usados] = num;
            usados++;
        }


        for (i = 0; i < usados; i++) {
            cout << elementos[i] << " " << quantidades[i] << "\n";
        }


    } while ();

    return 0;
}



