#include <iostream>
using namespace std;

int main() {
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    int i = 0;
    cout<<"====================================== \n";
    cout << "Daftar hari dalam semiggu (while):" << endl;
      cout<<"====================================== \n";
    while (i < 7) {
        cout << hari[i] << endl;
        i++;
    }
    return 0;
}

