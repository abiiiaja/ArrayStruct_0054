#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct orang{
    string nama;
    string alamat;
    int umur;
};

int main(){
    orang mhs;

    cout << "Nama Mahasiswa: ";
    cin >> mhs.nama;
    cout << "Alamat Desa: ";
    cin >> mhs.alamat.desa;
    cout << "Alamat Kota: ";
    cin >> mhs.alamat.kota;
    cout << "Umur: ";
    cin >> mhs.umur;
    cout << endl;

}