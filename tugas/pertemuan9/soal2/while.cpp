#include <iostream>
using namespace std;

int main() {
    string mahasiswa[5] = {"Rahman", "Mutiara", "Qatrunnada", "Joni Indo", "Farhan"};
    int i = 0;
    cout<<"===================================== \n";
    cout << "Daftar mahasiswa menggunakan while:" << endl;
    cout<<"===================================== \n";
    while (i < 5) {
        cout << i + 1 << ". " << mahasiswa[i] << endl;
        i++;
    }
    return 0;
}

