#include <iostream> // Memasukkan library iostream untuk input/output
using namespace std; // Menggunakan standar namespace untuk mencegah penulisan std::

// Fungsi untuk menentukan hasil ujian berdasarkan nilai MID dan UAS
string HASILUJIAN(int mid, int uas) {
    string ket = ""; // Variabel 'ket' bertipe string untuk menyimpan keterangan

    // Jika nilai MID dan UAS lebih dari 65, siswa dianggap lulus
    if (mid > 65 && uas > 65) {
        ket = "LULUS";
    } else {
        ket = "GAGAL"; // Jika salah satu nilai kurang dari atau sama dengan 65, siswa gagal
    }

    return ket; // Mengembalikan hasil dalam bentuk string
}

int main() { // Fungsi utama program
    int mid = 0, uas = 0; // Inisialisasi variabel untuk menyimpan nilai MID dan UAS
    string keterangan = ""; // Variabel untuk menyimpan hasil keterangan

    // Meminta pengguna untuk memasukkan nilai MID
    cout << "Input Nilai MID = "; 
    cin >> mid;

    // Meminta pengguna untuk memasukkan nilai UAS
    cout << "Input Nilai UAS = ";
    cin >> uas;

    // Memanggil fungsi HASILUJIAN dengan parameter nilai MID dan UAS
    keterangan = HASILUJIAN(mid, uas);

    // Menampilkan hasil keterangan, apakah siswa lulus atau gagal
    cout << "Keterangan: " << keterangan << endl;

    return 0; // Mengembalikan nilai 0 menandakan program berhasil dijalankan
}

