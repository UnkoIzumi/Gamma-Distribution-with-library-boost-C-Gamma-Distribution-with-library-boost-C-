// Exponentialdistri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class exponen {
private :
	const double e = 2.71828;
	double X = 0, lamda = 0, X1 = 0, X2 = 0, F = 0, F1 = 0,  F2 =0;
	double phi, persen, P, P1, P2;
public:
	void kurangdari() {
		cout << " == Proram Kurang Dari == " << endl;
		cout << " Nilai lamda : "; cin >> lamda;
		cout << " Nilai X     : "; cin >> X;

		phi = 1 / lamda;
		F = -phi * X;
		P = 1 - pow(e, F);
		persen = abs(P) * 100;
		cout << "Probabilitasnya adalah " << fixed << setprecision(3) << abs(P) << endl;
		cout << "Dengan Persen : " << persen << "%" << endl;
	}

	void lebihdari() {
		cout << " == Proram Kurang Dari == " << endl;
		cout << " Nilai lamda : "; cin >> lamda;
		cout << " Nilai X     : "; cin >> X;

		phi = 1 / lamda;
		F = -phi * X;
		P = pow(e, F);
		persen = abs(P) * 100;
		cout << "Probabilitasnya adalah " << fixed << setprecision(3) << abs(P) << endl;
		cout << "Dengan Persen : " << persen << "%" << endl;
	}

	void diantara() {
		cout << " == Proram Kurang Dari == " << endl;
		cout << " Nilai lamda : "; cin >> lamda;
		cout << " Nilai X1     : "; cin >> X1;
		cout << " Nilai X2     : "; cin >> X2;
		cout << "\n *ket X1 adalah nilai akhir" << endl;
		phi = 1 / lamda;
		F1 = -phi * X1;
		F2 = -phi * X2;
		P1 = 1 - pow(e, F1);
		P2 = 1 - pow(e, F2);
		P = P1 - P2;
		persen = abs(P) * 100;
		cout << "Probabilitasnya adalah " << fixed << setprecision(3) << abs(P) << endl;
		cout << "Dengan Persen : " << persen << "%" << endl;
	}
};

int main() {

}