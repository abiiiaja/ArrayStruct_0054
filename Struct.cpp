#include <iostream>
using namespace std;

struct orang{
    string nama;
    string alamat;
    int umur;
};

int main(){
    orang mhs;

    cout << "Nama Mahasiswa: ";
    cin >> mhs.nama;
    cout << "Alamat Asal: ";
    cin >> mhs.alamat;
    cout << "Umur: ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Nama: " << mhs.nama << endl;
    cout << "Alamat: " << mhs.alamat << endl;
    cout << "Umur: " << mhs.umur << endl;  
}
