#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct orang{
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){
    orang mhs;

    cout << "Nama Mahasiswa: ";
    getline(cin, mhs.nama);
    cout << "Alamat Desa: ";
    getline(cin, mhs.alamat.desa);
    cout << "Alamat Kota: ";
    getline(cin, mhs.alamat.kota);
    cout << "Umur: ";
    cin >> mhs.umur;
    cin.ignore();
    cout << endl;

    cout << "Nama: " << mhs.nama << endl;
    cout << "Desa: " << mhs.alamat.desa << endl;
    cout << "Kota: " << mhs.alamat.kota << endl;
    cout << "Umur: " << mhs.umur << endl;

}