#include <iostream>
using namespace std;

string buah [5], loop;
int posisi = 0;

void display(){
   system ("cls");
   if(posisi>0){
      cout<<"Data Tersimpan"<<endl;
      for (int a = 0; a< posisi; a++){
         cout<< a+1 << ". "<<buah[a] <<endl;
      }
   } else {
      cout<< "Data Kosong"<<endl;
   }
}
void tambah(){
   do{
      display();
      if(posisi < 5){
         cin.ignore();//untuk bisa menginput dan bisa spasi
         cout<< "tambah data: ";
         getline(cin, buah[posisi]);
         posisi++;
         display();
         cout<<"ulangi (Y/N) : ";
         cin>>loop;
      } else {
         cout<<"Tidak Bisa"<<endl;
         cout<<"Ketik N untuk kembali: ";
         cin>>loop;
      }

   } while (loop == "y");
cout<<"Tambah"<<endl;
}

void ubah(){
   int j;
   do{
      display();
      cout<<"ubah data ke : ";
      cin>>j;
      cin.ignore();
      cout<<"ubah menjadi: ";
      getline(cin, buah[j-1]);
      display();
      cout<<"ubah lagi? (Y/N) : ";
      cin>>loop;
   } while (loop == "y");
}

void hapus(){
   int i;
   do{
      display();
      if (posisi > 0){
         cout<<"hapus data ke : ";
         cin>>i;
         for(int x= i; x<posisi; x++){
            buah[x-1] = buah[x];
         }
         posisi--;
         display();
         cout<< "Hapus lagi (Y/N) : ";
         cin>>loop;
      } else{
         cout<<"isikan N : ";
         cin>>loop;
      }
   }while (loop == "y");
}

int main () {
   system ("cls");
   int pil;
   do {
      cout<<"1. Tambah\n2. Tampilkan\n3. Ubah\n4. Hapus\n5. Keluar"<<endl;
      cout<<"Pilih Dari No 1 Sampai 5: ";
      cin>>pil;
      switch(pil){
         case 1:
            tambah();
            break;
         case 2:
         do{
            display();
            cout<<"kembali (y) : ";
            cin>> loop;
         } while (loop != "y");
            break;
         case 3:
            ubah();
            break;
         case 4:
            hapus();
            break;
         case 5:
            cout<<"-------";
            break;
         default:
            cout<<"Pilih 1 - 5"<<endl;
            break;
      }
   } while (pil !=5);
   cout<<"Program Selesai!!-------";
}