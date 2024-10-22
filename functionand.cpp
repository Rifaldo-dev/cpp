#include <iostream> //memberitahu compiler bahwa program menggunakan library iostream
using namespace std; // berisi tentang perintah mencetak atau data ke layar / screen

string 	HASILUJIAN(int mid, int uas){//type data output function ini adalah data string 
	string ket=""; // vari ket dengan type data string=teks
	if(mid > 65 and uas >65 ){ // jika nilai lebih 65.\, ada aksi 
	ket="LULUS"; // aksi berikan data LULUS ke var ket 
	
	} else {
		ket = "Gagal";	
}
	return ket; // kembalikan var ket baris 26, pemanggil function
}

main () {// main = program utama harus ada setiap program C++/C
	int mid =0, uas=0; // var nilaites berisi data 0, type data int = bilangan bulat
	string keterangan="";//var keterangan berisi data blank, type data string+tesks
	
	cout<<"Input Nilai MID ="; // COUT = perintah mencetak teks di screen
	cin>>mid; // cin + menerima input data dari keyboard disimpan di var mid


// cout <<endl; //endl=perintah pindah baris
keterangan = HASILUJIAN ( mid, uas) ; //di panggil function HASILUJIAN
									//kirim parameter nilaites
	cout<<"keterangan = " <<keterangan <<keterangan <<endl ; // cetak teks keterangan 
	//cetak nilai yang dikandung var keterangan
	
}
