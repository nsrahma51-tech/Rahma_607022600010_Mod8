#include <iostream>
using namespace std;

struct Karyawan {
    int NIP;
    string Nama;
    int Gaji;
};

int main() {
    Karyawan data[3] = {
        {101, "Rahma", 300000000},
        {102, "Ica", 3500000},
        {103, "Kayla", 4000000}
    };

    int tertinggi = 0;
    int index = 0;

    for (int i = 0; i < 3; i++) {
        if (data[i].Gaji > tertinggi) {
            tertinggi = data[i].Gaji;
            index = i;
        }
    }

    cout << "Karyawan dengan Gaji Tertinggi" << endl;
    cout << "Nama : " << data[index].Nama << endl;
    cout << "Gaji : Rp" << data[index].Gaji << endl;

    return 0;
}
