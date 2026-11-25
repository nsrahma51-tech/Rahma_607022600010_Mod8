#include <iostream>
using namespace std;

struct Mobil {
    string merk;
    int tahun;
};

int main() {
    Mobil daftar[2];

    daftar[0].merk = "Toyota";
    daftar[0].tahun = 2020;

    cout << "Merk Mobil  : " << daftar[0].merk << endl;
    cout << "Tahun Mobil : " << daftar[0].tahun << endl;

    return 0;
}
