#include <iostream>
using namespace std;

int main() {
    string mahasiswa[5] = {"Rahman", "Mutiara", "Qatrunnada", "Joni Indo", "Farhan"};
    cout<<"================================\n";
    cout << "Daftar mahasiswa menggunakan for:" << endl;
    cout<<"====================================\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << mahasiswa[i] << endl;
    }
    return 0;
}

