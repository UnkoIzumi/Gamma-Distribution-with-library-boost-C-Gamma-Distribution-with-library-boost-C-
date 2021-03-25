// gammadistri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <boost/math/distributions/gamma.hpp>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <cstdlib>
using namespace boost::math;
using namespace std;

class gamma {
private:
    double alpha = 0, beta = 0;
    double X = 0, X1 = 0, X2 = 0;
    double P = 0, P1 = 0, P2 = 0;
    double F = 0, F1 = 0, F2 = 0;
public:
    int user() {
        system("cls");
        int pilihan;
        cout << "    ===> Program Distribusi Gamma <=== " << endl;
        cout << "  1. Nilai Lebih Dari" << endl;
        cout << "  2. Nilai Kurang Dari" << endl;
        cout << "  3. Nilai Diantara" << endl;
        cout << "  4. Nilai Atau" << endl;
        cout << "  5. Keluar" << endl;
        cout << " ----------------------------" << endl;
        cout << "  Pilihan : "; cin >> pilihan;

        return pilihan;

    }

    void pause() {
        cout << "\n Kembali Main Menu \n"; 
        system("pause");
    }

    void lebihdari() {
        cout << "  == Lebih Dari ==" << endl;
        cout << endl;

        cout << "  Nilai Alpha : "; cin >> alpha;
        cout << "  Nilai Beta  : "; cin >> beta;
        cout << "  Nilai X     : "; cin >> X;
        cout << endl;

        F = X / beta;
        gamma_distribution<> dist(alpha);
        P = 1 - cdf(dist, F);

        cout << "  Probabilitasnya  = " << fixed << setprecision(4) << abs(P) << endl;

    }

    void kurangdari() {
        cout << "  == Lebih Dari ==" << endl;
        cout << endl;

        cout << "  Nilai Alpha : "; cin >> alpha;
        cout << "  Nilai Beta  : "; cin >> beta;
        cout << "  Nilai X     : "; cin >> X;
        cout << endl;

        F = X / beta;
        gamma_distribution<> dist(alpha);
        P = cdf(dist, F);

        cout << "  Probabilitasnya  = " << fixed << setprecision(4) << abs(P) << endl;
    }

    void diantara() {
        cout << "  == Diantara ==" << endl;
        cout << endl;

        cout << "  Nilai Alpha : "; cin >> alpha;
        cout << "  Nilai Beta  : "; cin >> beta;
        cout << "  Nilai X1    : "; cin >> X1;
        cout << "  Nilai X2    : "; cin >> X2;
        cout << endl;

        F1 = X1 / beta;
        F2 = X2 / beta;
        gamma_distribution<> dist(alpha);
        P1 = cdf(dist, F1);
        P2 = cdf(dist, F2);
        P = P2 - P1;
        cout << "  Probabilitasnya  = " << fixed << setprecision(4) << abs(P) << endl;
    }

    void atau() {
        cout << "  == Diantara ==" << endl;
        cout << endl;

        cout << "  Nilai Alpha : "; cin >> alpha;
        cout << "  Nilai Beta  : "; cin >> beta;
        cout << "  Nilai X1    : "; cin >> X1;
        cout << "  Nilai X2    : "; cin >> X2;
        cout << endl;

        F1 = X1 / beta;
        F2 = X2 / beta;
        gamma_distribution<> dist(alpha);
        P1 = cdf(dist, F1);
        P2 = cdf(dist, F2);
        P = P2 + P1;
        cout << "  Probabilitasnya  = " << fixed << setprecision(4) << abs(P) << endl;
    }
};

    int main()
    {
        gamma coba;

        do {
            switch (coba.user()) {
            case 1:
                system("cls");
                coba.lebihdari();
                coba.pause();
                break;
            case 2:
                system("cls");
                coba.kurangdari();
                coba.pause();
                break;
            case 3:
                system("cls");
                coba.diantara();
                coba.pause();
                break;
            case 4:
                system("cls");
                coba.atau();
                coba.pause();
                break;
            case 5:
                system("cls");
                break;
            default:
                if (!coba.user()) {
                    cout << "Pilihan anda tidak ditemukan" << endl;
                    cin.clear();
                    cin.ignore();
                    coba.pause();
                }
                system("cls");
                break;
            }
        } while (coba.user() != 5);
        return 0;
    }