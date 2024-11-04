#include <iostream>
using namespace std;

double hitungVolumeKubus(double sisi) {
    return sisi * sisi * sisi;
}

int main() {
	 cout << "=====================================\n";
	cout << "Menghitung Volume Kubus - function \n";
	cout << "=====================================\n";
	  
    double sisi;
    cout << "Masukkan panjang sisi kubus: ";
    cin >> sisi;

    double volume = hitungVolumeKubus(sisi);
    cout << "Volume kubus: " << volume << endl;

    return 0;
}

