#include <iostream>
using namespace std;

int main() {
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    int i = 0;
     cout<<"====================================== \n";
    cout << "Daftar hari dalam semiggu (do-while):" << endl;
      cout<<"====================================== \n";
    do {
        cout << hari[i] << endl;
        i++;
    } while (i < 7);
    return 0;
}

