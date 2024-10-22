#include <iostream>
using namespace std;

int main() {
    int panjang, lebar, keliling;
    cout << "Masukkan panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar: ";
    cin >> lebar;
    
    keliling = 2 * (panjang + lebar);
    cout << "Keliling persegi panjang: " << keliling << " satuan" << endl;

    return 0;
}

