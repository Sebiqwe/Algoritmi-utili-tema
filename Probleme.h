#pragma once
#include <iostream>
using namespace std;
//FISA1
//Sa se afiseze numarul ce are frecventa cea mai mica si cea mai mare din vect citit.
void frecventaNumere(int v[], int d, int f[]) {
	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	
	}




}
void  frecventaMare(int v[], int d, int f[]) {
	frecventaNumere(v, d, f);
	int maximFrecventa = 0;
	int numarMAxim = -1;
	for (int i = 10; i < 100; i++) {

		if (f[i] > maximFrecventa) {
			maximFrecventa = f[i];
			numarMAxim = i;
		}
		
	}


	cout << "cea mai mare frecventa este " << maximFrecventa << endl;
	cout << "numarul cu cea mai mare frecventa este " << numarMAxim << endl;


}
void frecventaMica(int v[], int d, int f[]) {
	frecventaNumere(v, d, f);
	int minimFrecventa = d+1;
	int numarCuFrecventaMinima = 100;
	for (int i = 10; i < 100; i++) {
		if (f[i] < minimFrecventa ) {
			minimFrecventa = f[i];
			numarCuFrecventaMinima = i;
		}
	
	}

	cout << "cea mai mica frecventa este " << minimFrecventa << endl;
	cout << "numarul cu cea mai mica frecventa este " << numarCuFrecventaMinima << endl;



}
void testare() {
	int f[100] = {};
	int v[100] = { 12,14,14,15,17,17,17 };
	int d = 7;

	frecventaMare(v, d, f);
	frecventaMica(v, d, f);
	
}
//Sa se afiseze cel mai mare numar de 2 cif care nu se gaseste in vector
void citireVEct(int v[], int d) {
	for (int i = 0; i < d; i++) {
	
		cout << v[i] << " ";
	}


}
void frecvNr2Cif(int v[], int d, int f[]) {

	for (int i = 0; i < d; i++) {
		if (v[i] > 10 && v[i] < 99) {
			f[v[i]]++;
		}

	}



}
int celMaiMareNrDe2Cif(int f[]) {
	for (int i = 99; i >= 10; i--) {
		if (f[i] == 0) {
		
			return i;
		}
	
	
	}





}
void sol3() {
	int v[100] = { 12,45,67,89,90,32,77,13,55,87};
	int d = 10;
	citireVEct(v, d);
	int f[100] = {};
	frecvNr2Cif(v, d, f);
	int rez = celMaiMareNrDe2Cif(f);
	if (rez) {
		cout << "cel mai mare de 2 cif care NU apare in vector este " << rez << endl;
	}





}
//Sa se afiseze toate cifrele care nu apar in elem vectorului 
void frecventaCIfre(int n, int f[]) {




	while (n != 0) {

		int cifra = n % 10;

		f[cifra]++;
		n = n / 10;
	}
}
void cifCareNuApar(int v[], int d) {
	int f[10] = {};
	for (int i = 0; i < d; i++) {
	
	
		frecventaCIfre(v[i], f);
	
	
	}
	cout << "cif care nu apar sunt ";
	for (int i = 0; i < 10; i++) {
	
		if (f[i] == 0) {
		
			cout << i << " ";
		
		}
	
	
	
	}


}
void sol4() {

	int v[100] = { 14,77,5,33,45,79 };
	int d = 6;
	cifCareNuApar(v, d);






}
//Care este frecventa elementului minim dar a  cifrei maxime
int eleMentMinim(int v[], int d) {
	int nrMInim = v[0];
	for (int i = 0; i < d; i++) {
		if (v[i] < nrMInim) {
			nrMInim = v[i];

		}


	}

	return nrMInim;




}
int cifMAxima(int f[]) {
	int cifraMaxima = 0;
	for (int i = 0; i < 10; i++) {
		if (i>cifraMaxima) {
		
			cifraMaxima = i;
		}
	
	
	}


	return cifraMaxima;


}
void frecventaCifre(int n, int f[]) {

	


	while (n != 0) {

		int cifra = n % 10;

		f[cifra]++;
		n = n / 10;
	}
}
void testare2() {
	int v[] = { 123, 456, 789, 1234 };
	int d = 4;
	int f[10] = {};
	for (int i = 0; i < 10; i++) {
	
		frecventaCifre(v[i], f);
	}
	int cifMaxima = cifMAxima(f);
	cout << "cifra maxima este " << cifMaxima << endl;
	cout << "frecventa cifre maxime este " << f[cifMaxima] << endl;





}
//Se citeste un numar de maxim 8 cifre de la tastatura
//Cate cifre din fiecare are numarul citit 
void frecventaCifre2(int n, int f[]) {




	while (n != 0) {

		int cifra = n % 10;

		f[cifra]++;
		n = n / 10;
	}
}
void testare3() {
	int n = 0;
	cout << "n=" << n << endl;
	cin >> n;
	int f[10] = {};
	frecventaCifre2(n, f);
	cout << "frecventa cif lui " << n << "este : ";
	for (int i = 0; i < 10; i++) {
		cout << i << "are frecventa " << f[i] << endl;

	
	}



}
// Care sunt cifrelle care apar de mai mult de k ori int nr citit(k citit de la tastatura )
void frecventaCifre3(int n, int f[]) {




	while (n != 0) {

		int cifra = n % 10;

		f[cifra]++;
		n = n / 10;
	}
}
void testare4() {
	int n=0, k=0;
	cout << "n=" << n << endl;
	cin >> n;
	cout << "k=" << endl;
	cin >> k;
	int f[10] = {};
	frecventaCifre3(n, f);
	cout << " cifrele care apar mai mult de " << k << " sunt :";
	for (int i = 0; i < 10; i++) {
		if (f[i] > k) {
			cout << i << " cu frecventa de " << f[i] << endl;

		}
	
	}



	}
//Realizati cel mai mic numar de cifre impare care nu apar in numarul citit--->NU MI-A IESIT
void frecventaCifre4(int n, int f[]) {




	while (n != 0) {

		int cifra = n % 10;

		f[cifra]++;
		n = n / 10;
	}
}
void vectCifImpare(int v[], int d) {
	d = 0;
	for (int i = 0; i < 10; i++) {
		if (i % 2 != 0) {
		
			v[d++] = i;
		}
	
	
	}




}
void cifreImpareLipsa(int f[], int cifImp[], int dImp, int cifCareLipsesc[],int dCifLipsa) {
	dCifLipsa = 0;
	for (int i = 0; i < dImp; i++) {
		if (f[cifImp[i]] == 0) {
		
			cifCareLipsesc[dCifLipsa++] = cifImp[i];
		}
	
	}






}
void bubbleSort(int v[], int d) {


	bool sortat = false;


	do {

		sortat = true;

		for (int i = 0; i < d - 1; i++) {

			if (v[i] > v[i + 1]) {


				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}


	} while (sortat == false);

}
void testare5() {

	int n = 0;
	cout << "n=" << n << endl;
	cin >> n;
	int f[10] = {};
	frecventaCifre4(n, f);
	int cifImp[5];
	int d1 =5;
	vectCifImpare(cifImp, d1);
	int cifCareLipsesc[5];
	int dCifLipsa=1 ;
	 bubbleSort(cifCareLipsesc, dCifLipsa);

	cifreImpareLipsa(f, cifImp, d1, cifCareLipsesc, dCifLipsa);
	cout << "cel mai mic numa inpar este ";
	for (int i = 0; i < dCifLipsa; i++) {
		cout<<cifCareLipsesc[i] << endl;



	}





}
//realizati cel mai mare numar care se poate forma din cifrele ce apar in numarul citit luate de 2 ori 
void bubbleSortDesc(int v[], int d) {


	bool sortat = false;


	do {

		sortat = true;

		for (int i = 0; i < d - 1; i++) {

			if (v[i] < v[i + 1]) {


				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}


	} while (sortat == false);

}
void solutie() {
		int n;
		cout << "n=" << endl;
		cin >> n;
		int v[8];
		int d = 0;
		while (n > 0) {
			v[d] = n % 10;
			n = n / 10;
			d++;
		
		
		}
		
		bubbleSortDesc(v, 8);
		cout << "cel mai mare numarf format este :";
		for (int i = 0; i < 8; i++) {
		
			cout << v[i];
			cout << v[i];
		
		}
		
	
	
	}
//Care este numarul de cifre pe care trebuie sa le mai adaugam numarului citit astfel incat numarul rezultat sa aiba acelasi numar de cifre din fiecare 
void frecventaCifre1(int n, int f[]) {
	while (n != 0) {
		int cif = n % 10;
		f[cif]++;

		n = n / 10;
}





}
int frecventaCeaMaiMare(int f[], int d) {
	int frecvMaxima = 0;
	for (int i = 0; i < d; i++) {
		if (f[i] > frecvMaxima) {
		
			frecvMaxima = f[i];
		
		}
	
	}

	return frecvMaxima;

}
int cifDeAdaugat(int f[], int d, int frecvMaxima) {
	int cifreDeAdugat = 0;
	for (int i = 0; i < d; i++) {
		if (f[i] > 0) {
			cifreDeAdugat = cifreDeAdugat +(frecvMaxima - f[i]);
		}
	
	
	
	}


	return cifreDeAdugat;





}
void sol() {
	int n;
	cout << "n=" << endl;
	cin >> n;
	int f[9] = {};
	frecventaCifre(n, f);
	int frecventaMaxima = frecventaCeaMaiMare(f, 9);
	int cif = cifDeAdaugat(f, 9, frecventaMaxima); 
	cout << "numarul de cif care trebuie adaugat este " << cif << endl;







}
//Realizati un nou vector care sa contina toate cifrele prime care nu apar in vectorul initial 
void frecvCifre1(int n, int f[]) {
	while (n != 0) {
		int cif = n % 10;
		f[cif]++;

		n = n / 10;
	}





}
int  adugareCifPrimeInVect(int f[], int v[]) {
	int p[] = {2,3,5,7};
	int d = 0;
	for (int i = 0; i < 4; i++) {
		int cif = p[i];
		if (f[cif] == 0) {
		
			v[d] = cif;
			d++;
		
		}
	
	
	}

	return d;

}
void sol1() {
	int n;
	cout << "n=" << endl;
	cin >> n;
	int f[10] = {};
	frecvCifre1(n, f);
	int v[4] ;
	int d =  adugareCifPrimeInVect(f,  v);
	cout << "cif prime care nu apar in vectorul v sunt : ";
	for (int i = 0; i < d; i++) {
	
		cout << v[i] << " ";
	
	}



}
//Realizati cel mai mic numar care se poate forma din cifrele numarului initial, fara cif 0 
void celMaiMicNr(int v[]) {
	for (int i = 1; i < 9; i++) {
		if (v[i] > 0) {
		
			cout << i;
			v[i]--;
		
		}
	
	
	}






}
void sol2() {

	int n;
	cout << "n=" << endl;
	cin >> n;
	int f[10] = {};
	frecventaCifre1(n, f);
	celMaiMicNr(f);







}


//FISA2
//SA se sorteze primul Vector crescator cu metoda bulelor iar al doilea vector descrescator cu metoda selectiei
void afisareVector(int v[], int d) {
	for (int i = 0; i < d; i++) {
	
		cout << v[i] << " ";
	
	}



}
void bubbleSortCresc(int v[], int d) {
	bool sortat = false;
	do {
		sortat = true;
		for (int i = 0; i < d - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}
		
		
		}
	
	
	
	
	} while (sortat == false);







}
void sortareSelectieDesc(int v[], int d) {


	for (int i = 0; i < d; i++) {


		for (int j = i + 1; j < d; j++) {

			if (v[i] < v[j]) {
			

				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}

	}
}
void testare6() {
	int v[100] = { 13,65,33,55,31,88,44 };
	int d1 = 7;
	cout << "\n primul vector inainte de sortare este ";
	afisareVector(v, d1);
	cout << "\n primul vector dupa sortare este ";
	bubbleSortCresc(v, d1);
	afisareVector(v, d1);

	int f[100] = { 15,44,33,88,66,59,21,43 };
	int d2 = 8;
	cout << "\n al doilea vector inainte de sortare este ";
	afisareVector(f, d2);
	cout << "\n al doile vector dupa sortare este ";
	 sortareSelectieDesc(f, d2);
	afisareVector(f, d2);





}
//Realizati un nou vector prin interclasarea vect cititi a.i vectorul final sa aiba toate elelmentele care compun cei doi vectori in ordine cresc. Elem identice vor fi luate doar o singura data
void Interclasare(int a[], int da, int b[], int db, int c[]) {

	int ct1 = 0;
	int ct2 = 0;
	int ctpozC = 0;
	while (ct1 < da && ct2 < db) {
		if (a[ct1] > b[ct2]) {
			c[ctpozC] = b[ct2];
			ct2++;
			ctpozC++;

		}
		else {
			c[ctpozC] = a[ct1];
			ct1++;
			ctpozC++;


		}


	}
	while (ct1 < da) {

		c[ctpozC] = a[ct1];
		ct1++;
		ctpozC++;


	}
	while (ct2 < db) {
		c[ctpozC] = b[ct2];
		ct2++;
		ctpozC++;



	}

	afisareVector(c, da + db);











}
int elemCareSeRepeta(int c[], int d, int VectFinal[]) {
	int k = 0;
	VectFinal[k] = c[0];
	k++;
	for (int i = 1; i < d; i++) {
		if (c[i] != c[i - 1]) {
		
			VectFinal[k] = c[i];
			k++;
		}
	
	
	
	
	}

	return k;





}
void testare7() {
	int v[100] = { 1,2,2,6};
	int d = 4;
	int f[100] = { 4,5,7};
	int d2 = 3;
	int c[100];
	int dc = d + d2;
	Interclasare(v, d, f, d2, c);
	int cFinal[100];
	int dcFinal = elemCareSeRepeta(c, d + d2, cFinal);
	cout << "vectorul fara elem care se repeta ";
	afisareVector(cFinal, dcFinal);
}
//Realizati un nou vector prin interclasarea vect cititi a.i in vectorul final elementele consecutive de paritati diferite vor fi incrementate.Ca Rezultatcin tabloul final toate elementele dublete alaturate vor avea aceeasi paritate.Elementele dublete alaturate vor avea aceeasi paritate
void Interclasare2(int a[], int da, int b[], int db, int c[]) {

	int ct1 = 0;
	int ct2 = 0;
	int ctpozC = 0;
	while (ct1 < da && ct2 < db) {
		if (a[ct1] > b[ct2]) {
			c[ctpozC] = b[ct2];
			ct2++;
			ctpozC++;

		}
		else {
			c[ctpozC] = a[ct1];
			ct1++;
			ctpozC++;


		}


	}
	while (ct1 < da) {

		c[ctpozC] = a[ct1];
		ct1++;
		ctpozC++;


	}
	while (ct2 < db) {
		c[ctpozC] = b[ct2];
		ct2++;
		ctpozC++;



	}

	afisareVector(c, da + db);











}
int elemCareSeRepeta2(int c[], int d, int VectFinal[]) {
	int k = 0;
	VectFinal[k] = c[0];
	k++;
	for (int i = 1; i < d; i++) {
		if (c[i] != c[i - 1]) {

			VectFinal[k] = c[i];
			k++;
		}




	}

	return k;
}
int paritateEgala(int c[], int dc) {
	for (int i = 0; i < dc-1; i++) {
		if (c[i] % 2 != c[i + 1] % 2) {
			c[i + 1]++;
		
		
		}
	
	
	
	}

	return dc;

}
void testare8() {
	int v[100] = { 1,2,3 };
	int d1 = 3;
	int f[100] = { 4,5,6 };
	int d2 = 3;
	int c[100];
	int dc = d1 + d2;
	Interclasare2(v, d1, f, d2, c);
	int dcFinal = paritateEgala(c, d1 + d2);
	cout << "vectorul cu paritati egale este ";
	afisareVector(c, dcFinal);








}
//Realizati un nou vector prin interclasarea vect cititi a.i. int vect final vor fi introduse in ordine cresc doar elementele prime intree ele cu pozitia pe care stau tablourile initiale
bool nrEstePrim(int n) {
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
void Interclasare3(int a[], int da, int b[], int db, int c[]) {

	int ct1 = 0;
	int ct2 = 0;
	int ctpozC = 0;
	while (ct1 < da && ct2 < db) {
		if (a[ct1] > b[ct2]) {
			c[ctpozC] = b[ct2];
			ct2++;
			ctpozC++;

		}
		else {
			c[ctpozC] = a[ct1];
			ct1++;
			ctpozC++;


		}


	}
	while (ct1 < da) {

		c[ctpozC] = a[ct1];
		ct1++;
		ctpozC++;


	}
	while (ct2 < db) {
		c[ctpozC] = b[ct2];
		ct2++;
		ctpozC++;



	}

	afisareVector(c, da + db);











}
int vectPrime(int c[], int dc, int vectPrime[]) {
	int dp = 0;
	for (int i = 0; i < dc; i++) {
		if (nrEstePrim(c[i])&& nrEstePrim(i+1)) {
		
			vectPrime[dp++] = c[i];
		}
	
	
	
	
	
	}





	return dp;



}
void testare9() {
	int v[100] = { 2,4,7,45,33,17 };
	int d1 = 6;
	int f[100] = { 3,5,9,87,55 };
	int d2 = 5;
	int vectPrimeCuPozV[3];
	int vectPrimeCuPozF[3];
	int dv = vectPrime(v, d1, vectPrimeCuPozV);
	int df = vectPrime(f, d2, vectPrimeCuPozF);
	cout << "vectorul final v este ";
	afisareVector(vectPrimeCuPozV, dv);
	cout << "\n vectorul final f este ";
	afisareVector(vectPrimeCuPozF, df);
	int c[100] = {};
	cout << "\n vectorul dupa interclasare este ";
	Interclasare3(vectPrimeCuPozV, dv, vectPrimeCuPozF, df, c);


}

