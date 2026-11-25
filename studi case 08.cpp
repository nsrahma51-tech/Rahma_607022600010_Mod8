#include <iostream>
using namespace std;

struct Barang {
    int ID;
    string Nama;
    int Harga;
};

int main() {
    Barang data[3];

    for (int i = 0; i < 3; i++) {
        cout << "Data Barang ke-" << i + 1 << endl;

        cout << "Masukkan ID    : ";
        cin >> data[i].ID;

        cout << "Masukkan Nama  : ";
        cin >> data[i].Nama;

        cout << "Masukkan Harga : ";
        cin >> data[i].Harga;
    }

    cout << "===== DATA INVENTORI =====" << endl;
    cout << "ID\tNama\tHarga" << endl;

    for (int i = 0; i < 3; i++) {
        cout << data[i].ID << "\t"
             << data[i].Nama << "\t"
             << data[i].Harga << endl;
    }

    return 0;
}
