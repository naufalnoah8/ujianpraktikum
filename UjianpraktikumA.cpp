#include <iostream>

using namespace std;

int main()
{
   double hargabarang;
   double diskonbarang;
   double jumlahDiskon;
   double hargaSetelahDiskon; 

   cout << "Selamat Datang di Toko Unisba Blitar" << endl;
   cout << "=======================================" ;

   cout << "\nSilahkan Masukan   :" << endl;
   cout << "Harga barang (Rp)  = ";
   cin >> hargabarang;

   cout << "Disko barang (%)   = ";
   cin >> diskonbarang;

   jumlahDiskon = hargabarang * (diskonbarang / 100);
   hargaSetelahDiskon = hargabarang - jumlahDiskon;

   cout << "\nhasil :" << endl;
   cout << "jumlah diskon        = Rp " << jumlahDiskon << endl;
   cout << "harga setelah diskon = Rp " << hargaSetelahDiskon << endl;

   return 0;






}