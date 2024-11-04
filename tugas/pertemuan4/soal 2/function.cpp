#include <iostream>
using namespace std;


double hitungLuas(double panjang, double lebar) {
    return panjang * lebar;
}

double hitungKeliling(double panjang, double lebar) {
    return 2 * (panjang + lebar);
}

int main() {
	cout << "=============================================== \n";
	cout<< "Program Menghitung Luas dan Keliling Persegi Panjang - Function \n";
	cout << " ================================================== \n";
    double panjang, lebar;
    cout << "Masukkan panjang dan lebar: ";
    cin >> panjang >> lebar;

    double luas = hitungLuas(panjang, lebar);
    double keliling = hitungKeliling(panjang, lebar);
    
    cout << "Luas: " << luas << endl;
    cout << "Keliling: " << keliling << endl;

    return 0;
}

