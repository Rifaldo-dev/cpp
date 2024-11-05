#include <iostream>
using namespace std;

int HitungUsia(int thl, int ths) {
	int usia = ths-thl;
	return usia;
}
main() {
	int ths,thl;
	cout << "Tahun Sekarang  =";
	cin >>ths;
	cout << "Tahun Lahir =";
	cin >> thl;
	cout<< "hasil =" <<(ths-thl);
}

