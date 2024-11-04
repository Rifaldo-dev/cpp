#include <iostream>
using namespace std;

int main() {
    double sisi, volume;
    cout << "=====================================\n";
	cout << "Menghitung Volume Kubus - sequence \n";
	cout << "=====================================\n";
    
    cout << "Masukkan panjang sisi kubus: ";
    cin >> sisi;
    
    volume = sisi * sisi * sisi;
    cout << "Volume kubus adalah: " << volume << endl;
    return 0;
}

