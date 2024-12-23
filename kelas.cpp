#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct mahasiswa
{
  string nim;
  string nama;
  string alamat;
  float ipk;
};

mahasiswa sikc[30];

int pos=-1;

void dMenu(){
system("cls");
cout<<"Aplikasi Array of Struct"<<"\n";       
cout<<"1. Masukkan Data"<<"\n";            
cout<<"2. Tampilkan Data"<<"\n";            
cout<<"3. Perbaikan Data"<<"\n";           
cout<<"4. Hapus Data"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void tampilkanData(int p)
{
  cout << sikc[p].nim<<" , "<< sikc[p].nama<<" , "<< sikc[p].alamat<<" , "<<sikc[p].ipk<<endl;
}

void masukkanData()
{
  pos++;
  system("cls");
  fflush(stdin);
  cout << "Masukkan NIM: ";
  getline (cin, sikc[pos].nim);
  cout << "Masukkan Nama: ";
  getline (cin, sikc[pos].nama);
  cout << "Masukkan Alamat: ";
  getline (cin, sikc[pos].alamat);
  cout << "Masukkan IPK: ";
  cin >> sikc[pos].ipk;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    // mPertama("pertama");
    break;
   case '2':
    // mPertama("ke- dua");
    /* code */ 
    break;  
   case '3':
    // mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    // mPertama("ke- empat");
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}