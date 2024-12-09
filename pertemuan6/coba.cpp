#include <iostream>
using namespace std;

int main() {
    float pemakaian, tarif, total;

    cout << "Masukkan pemakaian air (m3): ";
    cin >> pemakaian;

    cout << "Masukkan tarif per m3: ";
    cin >> tarif;
    
    total = pemakaian * tarif;
    cout << "Total biaya pemakaian air: Rp" << total << endl;

    return 0;
}

