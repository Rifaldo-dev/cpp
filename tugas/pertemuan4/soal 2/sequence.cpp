#include <iostream>
using namespace std;

int main() {
	cout << "======================================================== \n";
	cout << "Program Menghitung Luas dan Keliling Persegi Panjang - sequence \n" ;
	cout << "========================================================== \n " ;
    double panjang, lebar;
    cout << "Masukkan panjang dan lebar: ";
    cin >> panjang >> lebar;

    double luas = panjang * lebar;
    double keliling = 2 * (panjang + lebar);
    
    cout << "Luas: " << luas << endl;
    cout << "Keliling: " << keliling << endl;

    return 0;
}

