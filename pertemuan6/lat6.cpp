#include <iostream>
using namespace std;

int HITUNGAIR(int mbi, int mbl){
	int pemakaian = mbi-mbl;
	return pemakaian;
}
main(){
	int Hitungair, mbi, mbl;
	cout<<"hitung pemakaian air" <<endl;
	cout<<"pdam tirta zernih" <<endl;
	
	cout<<"meteran bulan ini(MB) = ";
	cin>>mbi;
	
	cout<<"meteran bulan lalu(MB) =";
	cin>>mbl;
	
 int hitungair = HITUNGAIR (mbi, mbl);
	cout<<"pemakaian air (mb) = " <<HITUNGAIR<<endl;
	
}
