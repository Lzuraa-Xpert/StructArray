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

void perbaikanData(int p)
{
  system("cls");
  fflush(stdin);
  cout << "Masukkan Nama: ";
  getline (cin, sikc[p].nama);
  cout << "Masukkan Alamat: ";
  getline (cin, sikc[p].alamat);
  cout << "Masukkan IPK: ";
  cin >> sikc[p].ipk;
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
    masukkanData();
    break;
   case '2':
    system("cls");
    for (int i = 0; i <= pos; ++i)
    {
      tampilkanData(i);
    }
    getch();
    break;  
   case '3':
    system("cls");
    int indexPerbaikan;
    cout << "Masukkan index data yang akan diperbarui: ";
    cin >> indexPerbaikan;
    cin.ignore();
    perbaikanData(indexPerbaikan);
    break;  
   case '4':
    system("cls");
    int indexHapus;
    cout << "Masukkan index data yang akan dihapus: ";
    cin >> indexHapus;
    cin.ignore();
    if (indexHapus <= pos && indexHapus >= 0)
    {
      for (int i = indexHapus; i < pos; ++i)
      {
        sikc[i] = sikc[i + 1];
      }
      pos--;
    }
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