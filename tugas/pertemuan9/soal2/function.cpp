#include <iostream>
using namespace std;

int daftarMhs() {
    string mahasiswa[5] = {"Rahman", "Mutiara", "Qatrunnada", "Joni Indo", "Farhan"};
    cout<<"-------------------------------------\n " ;
    cout << "Daftar mahasiswa menggunakan function:" << endl;
    cout<< "-------------------------------------- \n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << mahasiswa[i] << endl;
    }
}

int main() {
    daftarMhs();
    return 0;
}

