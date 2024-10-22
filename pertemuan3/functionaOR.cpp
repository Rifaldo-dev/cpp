#include <iostream> 
using namespace std; 

string HASILUJIAN(int mid, int uas) {
    string ket = ""; 
    
    if (mid > 65 && uas > 65) {
        ket = "LULUS";
    } else {
        ket = "GAGAL"; 
    }

    return ket; 
}

int main() { 
    int mid = 0, uas = 0; 
    string keterangan = ""; 
   
    cout << "Input Nilai MID = "; 
    cin >> mid;

    
    cout << "Input Nilai UAS = ";
    cin >> uas;

    keterangan = HASILUJIAN(mid, uas);

     cout << "Keterangan: " << keterangan << endl;

    return 0; 
}

