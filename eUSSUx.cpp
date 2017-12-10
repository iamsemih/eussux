#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
// SEMIH
int main(){
	double I=1, E=1, FAKT=1, N, X;
	cout << "Terim sayisini giriniz.\n";
	cin >> N;
	system("cls");
	cout << "Hesaplanacak x degerini giriniz.\n";
	cin >> X;
	A10:
	if (I<N){
		FAKT*=I;
		E+=(pow(X,I)/FAKT);
		I++;
		goto A10;
	}
	cout << "e ussu " << X << " = " << E;
	getch();
	return 0;
}
