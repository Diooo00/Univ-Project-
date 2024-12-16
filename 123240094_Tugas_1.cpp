#include <iostream>
using namespace std;
main(){

int menu;
cout << "Welcome to Warung Antony Mewahhhh" << endl;
cout << "Ingin membeli produk nomor berapa?" << endl;
cout << "Daftar Produk : " << endl;
cout << "1. Sabun" << endl;
cout << "2. Sampo" << endl;
cout << "3. Pasta gigi" << endl;
cout << "4. Roti" << endl;
cout << "5. Air mineral" <<  endl;
cout << "Masukkan nomor produk : ";
cin >> menu;
switch (menu)
{
    case 1:
        cout << "Sabun" << endl;
        cout << "Merk : Lifeboy" << endl;
        cout << "Jumlah stok : 1000" << endl;
        cout << "Harga : 10.000" << endl;
        system ("pause");
    break;
    case 2:
        cout << "Sampo" << endl;
        cout << "Merk : Head & Shouder" << endl;
        cout << "Jumlah stok : 1000" << endl;
        cout << "Harga : 12.000" << endl;
        system ("pause");
    break;
    case 3:
        cout << "Pasta gigi" << endl;
        cout << "Merk : Pepsodent" << endl;
        cout << "Jumlah stok : 1000" << endl;
        cout << "Harga : 15.000" << endl;
        system ("pause");
    break;
    case 4:
        cout << "Roti" << endl;
        cout << "Merk : Sari roti" << endl;
        cout << "Jumlah stok : 500" << endl;
        cout << "Harga : 5.000" << endl;
        system ("pause");
    break;
    case 5:
        cout << "Air mineral" << endl;
        cout << "Merk : Le mineral" << endl;
        cout << "Jumlah stok : 2000" << endl;
        cout << "Harga : 3.000" << endl;
        system ("pause");
    break;
    default:
        cout << "Jangan cari yang ga ada ";
    break;
}
}