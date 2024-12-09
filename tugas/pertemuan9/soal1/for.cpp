#include <iostream>
using namespace std;

int main() {
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    cout<<"====================================== \n";
    cout << "Daftar hari dalam semiggu (for):" << endl;
    cout<<"====================================== \n";  
	  for (int i = 0; i < 7; i++) {
        cout << hari[i] << endl;
    }
    return 0;
}

