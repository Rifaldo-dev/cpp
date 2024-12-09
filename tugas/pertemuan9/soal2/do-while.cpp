#include <iostream>
using namespace std;

int main() {
    string mahasiswa[5] = {"Rahman", "Mutiara", "Qatrunnada", "Joni Indo", "Farhan"};
    int i = 0;
    cout<<"=============================\n";
    cout << "Daftar mahasiswa menggunakan do-while:" << endl;
    cout<<"=============================\n";
    do {
        cout << i + 1 << ". " << mahasiswa[i] << endl;
        i++;
    } while (i < 5);
    return 0;
}

