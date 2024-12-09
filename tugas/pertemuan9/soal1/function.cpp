#include <iostream>
using namespace std;

int daftarHari() {
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    cout<<"=====================================\n";
    cout << "Daftar hari dalam semiggu (funtion):" << endl;
      cout<<"===================================== \n";
    for (int i = 0; i < 7; i++) {
        cout << hari[i] << endl;
    }
}

int main() {
    daftarHari();
    return 0;
}

