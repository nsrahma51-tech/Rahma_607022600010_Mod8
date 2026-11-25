#include <iostream>
using namespace std;

struct Karyawan {
    int NIP;
    string Nama;
    int Gaji;
};

int main() {
    Karyawan data[3] = {
        {101, "Rahma", 30000000},
        {102, "Ica", 3500000},
        {103, "Kayla", 4000000}
    };

    int cari;
    bool ditemukan = false;

    cout << "Masukkan NIP Karyawan: ";
    cin >> cari;

    for (int i = 0; i < 3; i++) {
        if (data[i].NIP == cari) {
            cout << "\nData Karyawan Ditemukan!" << endl;
            cout << "NIP  : " << data[i].NIP << endl;
            cout << "Nama : " << data[i].Nama << endl;
            cout << "Gaji : Rp" << data[i].Gaji << endl;

            ditemukan = true;
            break;
        }
    }

    if (ditemukan == false) {
        cout << "Data Karyawan Tidak Ditemukan!" << endl;
    }

    return 0;
}
