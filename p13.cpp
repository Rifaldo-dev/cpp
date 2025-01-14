#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

void JUDUL1() {
	cout<<"\t\tFAKTUR PENJUALAN TOKO MAJU";
}
void JUDUL2 (string nama, string email, string tgl){
	cout<<"\n\n\t Nama Pelanggan : "<<nama
		<<"\t Email : "<<email
		<<"\n\t Tanggal : " <<tgl;

}
void JUDUL3 (int jmlh [4], string nb [4], string satuan [4], float harga [4]) {
	cout<<"\n----------------------------------------------------------------------------------------------------------";
	cout<<"\nNO" <<"\t" <<"Jumlah" <<"\t" <<"Nama Barang" <<"\t\t"<<"Satuan" <<"\t\t" <<"Harga Rp." <<"\t" <<"Biaya Rp.";
	cout<<"\n----------------------------------------------------------------------------------------------------------";
	int no = 1;
	float biaya = 0, TTLbiaya = 0;
	float Diskon = 0, bayar = 0;
//Menggunakan fungsi Looping untuk menampilkan data-data dari semua variable
	for (int i = 0; i < 4; i++) {

		biaya = jmlh[i] * harga[i];

		cout<<"\n" << no++ <<"\t" <<jmlh[i] <<"\t" <<nb[i]
			<<"\t" <<satuan[i] <<"\t\t" <<harga[i] <<"\t\t" <<biaya;

		TTLbiaya = TTLbiaya + biaya;
		bayar = TTLbiaya - Diskon;
//Menggunakan fungsi If Else untuk mencari Diskon
	if ( TTLbiaya >= 500000 && TTLbiaya <= 600000){
		Diskon = 0.05 * TTLbiaya;
	}
	else if ( TTLbiaya >= 600000 && TTLbiaya <= 800000){
		Diskon = 0.75 * TTLbiaya;
	}
	else if ( TTLbiaya >= 800000){
		Diskon = 0.10 * TTLbiaya;
	}else {
		Diskon = 0;
	}

	}

	cout<<"\n-------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t Total Biaya Rp	= "<<TTLbiaya;
	cout<<"\n\t\t\t\t\t\t\t Diskon		= "<<Diskon;
	cout<<"\n\t\t\t\t\t\t\t Total Bayar	= "<<bayar;
}

int main()
{
	string nama = "Novita Amriani ";
	string email = "novitaamriani@gmail.com";
	string tgl = "28 November 1999";
	int jmlh		[4] = {4, 7, 10, 3};
	string nb		[4] = {"Kertas HVS 80 gr ", "Marker (spidol)	", "Penghapus Papan	", "Double Flio	" };
	string satuan	[4] = {"Rim", "Lusin", "Lusin", "Kodi"};
	float harga		[4] = {80000, 50000, 25000, 5000};

	JUDUL1	();
	JUDUL2	(nama, email, tgl);
	JUDUL3  (jmlh, nb, satuan, harga);

	getchar();
	return 0;
}
