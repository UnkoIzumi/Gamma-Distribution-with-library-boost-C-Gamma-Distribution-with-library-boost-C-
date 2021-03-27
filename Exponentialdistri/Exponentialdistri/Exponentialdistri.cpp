// Exponentialdistri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // input output program
#include <iomanip> // input output manipuasi
#include <cmath> // matematic logika
#include <cstdlib> // system pause and clear
using namespace std;

class exponent {
private :
	const double e = 2.71828;
	double X = 0, lamda = 0, X1 = 0, X2 = 0, F = 0, F1 = 0,  F2 =0;
	double phi = 0, persen = 0, P = 0, P1 = 0, P2 = 0;
public:
	void kurangdari() {
		cout << " == Proram Kurang Dari == " << endl;
		cout << " Nilai lamda : "; cin >> lamda;
		cout << " Nilai X     : "; cin >> X;

		phi = 1 / lamda;
		F = -phi * X;
		P = 1 - pow(e, F);
		persen = abs(P) * 100;
		cout << "\nProbabilitasnya adalah " << fixed << setprecision(3) << abs(P) << endl;
		cout << "Dengan Persen : " << fixed << setprecision(2) << persen << "%" << endl << endl;
	}

	void lebihdari() {
		cout << " == Proram Kurang Dari == " << endl;
		cout << " Nilai lamda : "; cin >> lamda;
		cout << " Nilai X     : "; cin >> X;

		phi = 1 / lamda;
		F = -phi * X;
		P = pow(e, F);
		persen = abs(P) * 100;
		cout << "\nProbabilitasnya adalah " << fixed << setprecision(3) << abs(P) << endl;
		cout << "Dengan Persen : " << fixed << setprecision(2) << persen << "%" << endl << endl;
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
		cout << "\nProbabilitasnya adalah " << fixed << setprecision(3) << abs(P) << endl;
		cout << "Dengan Persen : " << fixed << setprecision(2) << persen << "%" << endl << endl;
	}

	int menu() {
		int pilih;
		system("cls");
		cout << " ___ Exponential Distribution ___ " << endl;
		cout << " 1. Nilai Diantara    " << endl;
		cout << " 2. Nilai Kurang Dari " << endl;
		cout << " 3. Nilai Lebih Dari  " << endl;
		cout << " 4. Keluar            " << endl;
		cout << "______________________" << endl;
		cout << " Pilihan : "; cin >> pilih;

		return pilih;
	}
};

int main() {
	exponent Demo;
	int user;

	do {
		user = Demo.menu();
		switch (user) {
		case 1:
			system("cls");
			Demo.diantara();
			system("pause");
			break;
		case 2:
			system("cls");
			Demo.kurangdari();
			system("pause");
			break;
		case 3:
			system("cls");
			Demo.lebihdari();
			system("pause");
			break;
		case 4:
			system("cls");
			break;
		default:
			if (!user) {
				cout << "\n--Pilihan anda tidak ditemukan--" << endl;
				cin.clear();
				cin.ignore();
			}
			system("cls");
			break;
		}
	} while (user != 4);
	
	return 0;
	
}
