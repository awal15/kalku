#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  float a,b;
  int kode;
  
  menu :
    cout << "Kalkulator Sederhana\n";
    cout << "Author : Awalramadhan\n\n";
    cout << "Silahkan Dipilih Gan <__>\n\n";
    cout << "Pilihan Menu Nya Gan : \n";
    cout << "1. penjumlahan (+)\n";
    cout << "2. pengurangan (-)\n";
    cout << "3. perkalian (*)\n";
    cout << "4. pembagian (/)\n";
    cout << "Silahkan masukkan kode menu : ";cin >> kode;
    
    if (kode > 4 || kode < 1){
      cout << "kode salah \n silahkan ulangi kode .";
      system ("pause");
      system ("cls");
      goto menu;
    }
    else {
      cout << "\nMasukkan Angka Pertama : ";cin >>a;
      cout << "\nMasukkka Angka Kedua : ";cin >>b;
      if (kode == 1){
        cout << "\nHasil Penjumlahan dari "<<a<<" + "<<b<<" adalah : "<<a+b<<endl;
      }
      else if (kode == 2){
        cout << "\nHasil Pengurangan dari "<<a<<" - "<<b<<" adalah : "<<a-b<<endl;
      }
      else if (kode == 3){
        cout << "\nHasil Perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<<endl;
      }
      else if (kode == 4){
        cout << "\nHasil Pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<<endl;
      }
    }
}








