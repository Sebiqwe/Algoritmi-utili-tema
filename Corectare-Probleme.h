#pragma once
#include <iostream>
using namespace std;
// Realizati cel mai mic numar de cifre impare care nu apar in numarul citit
void frecventaCifre(int n, int f[]) {
	while (n != 0) {
		int cif = n % 10;
		f[cif]++;
		n = n / 10;

	
	
	
	}



}
int  cifreCareNuApar(int n) {

	int f[10]{};
	frecventaCifre(n, f);
	int nou = 0;
	for (int i = 1; i < 10; i+=2) {
	
		
		if (f[i] == 0) {

			nou = nou * 10 + i;
		}
	}

	return nou;


}
//Realizati cel mai mare numar care se poate forma cu cifrele care apar in numarul citit luate de maxim 2 ori 

int cifCareAparDe2Ori(int n) {
	int f[10]= {};
	frecventaCifre(n,f);
	int nNou = 0;

	for (int i = 1; i < 10; i++) {
		if (f[i]>0&&f[i] <= 2) {
		
			nNou = nNou *10 + i;
		}
	
	
	}


	return nNou;

}
//Care este numarul minim de cifre care ar trebui sa le mai adaugam numarului citit a.i. numarul rezultat sa aiba acelasi numar de cifre din fiecare
int  fracventaEgale(int n) {
	int f[10] = {};
	frecventaCifre(n, f);
	int cif = 0;
	int ctCif = 0;
	for (int i = 0; i < 10; i++) {
		if (f[i] != f[i + 1]) {
			cif * 10 + i;
			ctCif++;
		
		}
	
	
	
	}


	return ctCif;



}
//Realizati un vector care sa contina toate cifrele prime care nu apar in numarul initial
int nPrime(int n) {

	if (n == 1 || n == 0) {
		return false;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		
		}
	
	}
	return true;

}
int cifPrimeCareNuApar(int n) {
	int f[10] = {};
	frecventaCifre(n, f);
	int v[10] = {};
	int dv=0;
	for (int i = 1; i < 10; i++) {
		if (nPrime(f[i])) {
		
			v[dv++];
		
		}
	
	
	}

	return v[dv];


}
