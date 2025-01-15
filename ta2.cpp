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

void TampilkanJudul3(int jumlahBarang[3], string namaBarang[3], string satuanBarang[3], float hargaBarang[3]) {
    cout << "\n----------------------------------------------------------------------------------------------------------";
    cout << "\nNO\tJumlah\t\tNama Barang\t\t\tSatuan\t\tHarga (Rp)\t\tBiaya (Rp)";
    cout << "\n----------------------------------------------------------------------------------------------------------";
    int nomor = 1;
    float biayaPerBarang = 0, totalBiaya = 0;
    float diskon = 0, totalBayar = 0;

    for (int i = 0; i < 3; i++) {
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
    } else if (totalBiaya > 600000 && totalBiaya <= 800000) {
        diskon = 0.075 * totalBiaya;
    } else if (totalBiaya > 800000) {
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
    string idPelanggan, namaPelanggan, emailPelanggan, tanggalPembelian;
    
    cout << "Masukkan ID Pelanggan: ";
    getline(cin, idPelanggan);
    cout << "Masukkan Nama Pelanggan: ";
    getline(cin, namaPelanggan);
    cout << "Masukkan Email Pelanggan: ";
    getline(cin, emailPelanggan);
    cout << "Masukkan Tanggal Pembelian: ";
    getline(cin, tanggalPembelian);

    int jumlahBarang[3];
    string namaBarang[3];
    string satuanBarang[3];
    float hargaBarang[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nMasukkan Nama Barang ke-" << (i + 1) << ": ";
        getline(cin, namaBarang[i]);
        cout << "Masukkan Jumlah Barang ke-" << (i + 1) << ": ";
        cin >> jumlahBarang[i];
        cin.ignore();  // untuk mengabaikan karakter newline setelah input jumlah barang
        cout << "Masukkan Satuan Barang ke-" << (i + 1) << ": ";
        getline(cin, satuanBarang[i]);
        cout << "Masukkan Harga Barang ke-" << (i + 1) << ": ";
        cin >> hargaBarang[i];
        cin.ignore();  // untuk mengabaikan karakter newline setelah input harga barang
    }

    TampilkanJudul1();
    TampilkanJudul2(idPelanggan, namaPelanggan, emailPelanggan, tanggalPembelian);
    TampilkanJudul3(jumlahBarang, namaBarang, satuanBarang, hargaBarang);

    return 0;
}

