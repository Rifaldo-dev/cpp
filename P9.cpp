#include <iostream>
using namespace std;

int CETAKNILAIGO() {
    string daftarHari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    cout << "Daftar hari dalam seminggu:\n";
    for (int i = 0; i < 7; i++) {
        cout << daftarHari[i] << endl;
    }
    return 0;
}

