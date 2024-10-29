#include <iostream>
using namespace std;

string HASILUJIAN(int mid, int uas){
	
	string ket="";
	if(mid >65 || uas > 65){
		ket="LULUS";
	} else {
		ket ="GAGAL";                         
}
	return ket;
}
main () {
	int mid=0, uas =0;
	string ket="";
	
	cout<<"Input Nilai MID = ";
	cin >>mid;
	cout<<"Input Nilai UAS =";
	cin>>uas;
	
	ket = HASILUJIAN (mid, uas);
	
	cout<<"Keterangan =" <<ket <<endl ;
	
}
