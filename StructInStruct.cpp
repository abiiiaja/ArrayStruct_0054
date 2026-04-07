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
    cin >> mhs.nama;
    cout << "Alamat Desa: ";
    cin >> mhs.alamat.desa;
    cout << "Alamat Kota: ";
    cin >> mhs.alamat.kota;
    cout << "Umur: ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Nama: " << mhs.nama << endl;
    cout << "Alamat Desa: " << mhs.alamat.desa << endl;
    cout << "Alamat Kota: " << mhs.alamat.kota << endl;
    cout << "Umur: " << mhs.umur << endl;

}