#include <iostream>
#include <locale>
#include <string>
#include <windows.h>
using namespace std;

void Main() {
	int media, dias,graus[999],ii=0,a=0;

	cin >> media;
	cin >> dias;
	for (int i = 0; i < dias; i++) {
		cin >> graus[i];
		if (graus[i] > media + 5) {
			i++;
			ii++;
			do {
				i++;
				ii++;
			} while (graus[i] < media + 5);
			if (ii <= 6) {
				a++;
			}
		}
		ii = 0;
		
	}
	if (a == 1) {
		cout << "Wave";
	}
	else {
		cout << "Flat";
	}


}

