#include <iostream>
using namespace std;

int jumlah_elemen (int n, int nilai[]){
    int jumlah=0;
    for (int i=0;i<n;i++){
        jumlah=jumlah + nilai[i];
    }
    cout<<"Jumlah Seluruh Elemen Array: "<<jumlah;
}

int main()
{
    system("CLS");
    int n, nilai[n];
    cout<<"Inputkan Banyak Data Array: ";
    cin>> n;
    for (int i=0;i<n;i++){
        cout<<"Nilai ke-"<<i+1<<": ";
        cin>>nilai[i];
    }
    jumlah_elemen(n,nilai);
    return 0;
}