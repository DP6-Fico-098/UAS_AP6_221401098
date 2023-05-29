#include <iostream>
using namespace std;

struct Nilai {
    int UTS;
    int UAS;
};
struct Mahasiswa {
    string nama;
    string KOM;
    string NIM;
    struct Nilai skor_akhir;
};

int main (){
    system ("cls");
Mahasiswa data_mahasiswa;
    cout<<"Program Data Mahasiswa dan Nilai Para Mahasiswa\n";
    cout<<"Masukkan nama anda : "; 
    cin>>data_mahasiswa.nama;
    cout<<"Masukkan KOM anda : ";
    cin>>data_mahasiswa.KOM;
    cout<<"Masukkan NIM anda : ";
    cin>>data_mahasiswa.NIM;
    cout<<"Masukkan nilai UTS anda : ";
    cin>>data_mahasiswa.skor_akhir.UTS;
    cout<<"Masukkan nilai UAS anda : ";
    cin>>data_mahasiswa.skor_akhir.UAS;

    cout<<"Data Yang Telah Anda Inputkan\n";
    cout<<"Nama Anda\t: "<<data_mahasiswa.nama<<endl;
    cout<<"KOM Anda\t: "<<data_mahasiswa.KOM<<endl;
    cout<<"NIM Anda\t: "<<data_mahasiswa.NIM<<endl;
    cout<<"Nilai UTS Dan UAS Anda\t: "<<data_mahasiswa.skor_akhir.UTS<<" DAN "<<data_mahasiswa.skor_akhir.UAS<<endl;
}