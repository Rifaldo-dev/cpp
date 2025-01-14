#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

void TampilkanJudul1() {
    cout << "\t\tFAKTUR PENJUALAN TOKO ROBOTIKA\n";
}

void TampilkanJudul2(string idPelanggan, string namaPelanggan, string emailPelanggan, string tanggalPembelian) {
    cout << "\n\n\t ID Pelanggan   : " << idPelanggan
         << "\n\t Nama Pelanggan : " << namaPelanggan
         << "\n\t Email          : " << emailPelanggan
         << "\n\t Tanggal        : " << tanggalPembelian << "\n";
}

void TampilkanJudul3(int jumlahBarang[4], string namaBarang[4], string satuanBarang[4], float hargaBarang[4]) {
    cout << "\n----------------------------------------------------------------------------------------------------------";
    cout << "\nNO\tJumlah\t\tNama Barang\t\t\tSatuan\t\tHarga (Rp)\t\tBiaya (Rp)";
    cout << "\n----------------------------------------------------------------------------------------------------------";
    int nomor = 1;
    float biayaPerBarang = 0, totalBiaya = 0;
    float diskon = 0, totalBayar = 0;


    for (int i = 0; i < 4; i++) {
        biayaPerBarang = jumlahBarang[i] * hargaBarang[i];

       
        cout << "\n" << setw(2) << nomor++
             << "\t" << setw(6) << jumlahBarang[i] << "\t\t" 
             << setw(20) << namaBarang[i] << "\t\t" 
             << setw(5) << satuanBarang[i] << "\t\t" 
             << setw(10) << hargaBarang[i] << "\t" 
             << setw(10) << biayaPerBarang;

        totalBiaya += biayaPerBarang;
    }

    if (totalBiaya >= 500000 && totalBiaya <= 600000) {
        diskon = 0.05 * totalBiaya;
    } else if (totalBiaya >= 600000 && totalBiaya <= 800000) {
        diskon = 0.075 * totalBiaya;
    } else if (totalBiaya >= 800000) {
        diskon = 0.10 * totalBiaya;
    } else {
        diskon = 0;
    }
    totalBayar = totalBiaya - diskon;

    cout << "\n----------------------------------------------------------------------------------------------------------";
    cout << "\n\t\t\t\t\t\t\tTotal Biaya (Rp)\t= " << setw(10) << totalBiaya;
    cout << "\n\t\t\t\t\t\t\tDiskon (Rp)\t\t= " << setw(10) << diskon;
    cout << "\n\t\t\t\t\t\t\tTotal Bayar (Rp)\t= " << setw(10) << totalBayar;
}

int main() {
    string idPelanggan = "A101";
    string namaPelanggan = "M. Rifaldo Saputra";
    string emailPelanggan = "muhammadrifaldosaputra@gmail.com";
    string tanggalPembelian = "13 Januari 2025";

    int jumlahBarang[4] = {5, 2, 10, 1};
    string namaBarang[4] = {"Kabel USB", "Arduino Uno", "Resistor", "Solder"};
    string satuanBarang[4] = {"Pcs", "Pcs", "Pcs", "Pcs"};
    float hargaBarang[4] = {15000, 200000, 1000, 75000};

    TampilkanJudul1();
    TampilkanJudul2(idPelanggan, namaPelanggan, emailPelanggan, tanggalPembelian);
    TampilkanJudul3(jumlahBarang, namaBarang, satuanBarang, hargaBarang);

    getchar();
    return 0;
}

