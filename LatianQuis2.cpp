#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string user;
    string pass;
    string kode;
    string nama;
    int menu;
    int K = 3;
    int L;
    int M;
    int jumlah;
    int total;
    int jml;
    double DC;


    // Perulangan
    do
    {
        system ("cls");
        cout << "==========================================" << endl;
        cout << setw(5) << left << "|";
        cout << "PROGRAM KASIR TOKO BESI PAK IMAN";
        cout << setw(5) << right << "|" << endl;
        cout << "==========================================" << endl << endl;

        cout << "Masukkan Username : ";
            getline(cin,user);
        cout << "Masukkan Password : ";
            getline(cin,pass);

            if(user=="Filipus" && pass=="123240133"){
                cout<< endl << "Login Berhasil"<< endl << endl;
                system ("pause");
            }else{
                cout<< endl << "Username atau Password Salah"<< endl;
                cout<<"Tersisa " << K << " Kesempatan" << endl << endl;
            system ("pause");
                if (K == 0){
                        system ("cls");
                        cout << endl << endl << "Login Gagal" << endl << endl;
            system ("pause");
                }
            }

        --K;
    } while (user != "Filipus" && pass != "123240133" && K >= 0);
            system ("cls");

    if (user=="Filipus" && pass=="123240133"){
        cout << "==========================================" << endl;
        cout << setw(5) << left << "|";
        cout << "PROGRAM KASIR TOKO BESI PAK IMAN";
        cout << setw(5) << right << "|" << endl;
        cout << "------------------------------------------" << endl;
        cout << setw(15) << left << "|";
        cout << "MENU PESANAN";
        cout << setw(15) << right << "|" << endl;
        cout << "==========================================" << endl << endl;

        // Menu
        cout << "Kode Transaksi         : ";
            cin >> kode;
        cout << "Nama Pembeli           : ";
            cin >> nama;
        cout << "==========================================" << endl;
        cout << "| No |     Nama Menu     |     Harga     |" << endl;
        cout << "------------------------------------------" << endl; 
        cout << "|1.  | Palu              | Rp45.000,00   |" << endl;
        cout << "|2.  | Paku              | Rp1.000,00    |" << endl;
        cout << "|3.  | Paku Beton        | Rp2.000,00    |" << endl;
        cout << "|4.  | Gergaji           | Rp65.000,00   |" << endl;
        cout << "|5.  | Cangkul           | Rp250.000,00  |" << endl;
        cout << "|6.  | Obeng             | Rp30.000,00   |" << endl;
        cout << "|7.  | Pahat             | Rp190.000,00  |" << endl;
        cout << "|8.  | Kuas              | Rp20.000,00   |" << endl;
        cout << "|9.  | Engsel Pintu      | Rp20.000,00   |" << endl;
        cout << "|10. | Cat               | Rp92.000,00   |" << endl;
        cout << "==========================================" << endl << endl;

        cout << "Masukkan Nomor Menu    : ";
            cin >> menu;
        cout << endl;
    }

    switch (menu)
    {
    case 1: 
            M = 1;
            cout << "Nama Menu               : Palu" << endl;
            cout << "Haga Satuan             : Rp45.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 45000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;

    case 2:
            M = 2;
            cout << "Nama Menu               : Paku" << endl;
            cout << "Haga Satuan             : 1.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 1000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;

    case 3:
            M = 3;
            cout << "Nama Menu               : Paku Beton" << endl;
            cout << "Haga Satuan             : 2.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 2000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;

    case 4:
            M = 4;
            cout << "Nama Menu               : Gergaji" << endl;
            cout << "Haga Satuan             : 65.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 65000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;
    
    case 5:
            M = 5;
            cout << "Nama Menu               : Cangkul" << endl;
            cout << "Haga Satuan             : 250.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 250000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;

    case 6:
            M = 6;
            cout << "Nama Menu               : Obeng" << endl;
            cout << "Haga Satuan             : 30.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 30000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;
            
    case 7:
            M = 7;
            cout << "Nama Menu               : Pahat" << endl;
            cout << "Haga Satuan             : 190.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 190000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;

    case 8:
            M = 8;
            cout << "Nama Menu               : Kuas" << endl;
            cout << "Haga Satuan             : 20.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 20000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;

    case 9:
            M = 9;
            cout << "Nama Menu               : Engsel Pintu" << endl;
            cout << "Haga Satuan             : 20.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 20000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;

    case 10:
            M = 10;
            cout << "Nama Menu               : Cat" << endl;
            cout << "Haga Satuan             : 92.000,00" << endl;
            cout << "Masukkan Jumlah Barang  : ";
                cin >> jumlah;
            total = jumlah * 92000;
            cout << "Total Harga             : Rp" << total << endl << endl;
            system("pause");
            system ("cls");
        break;

    default:
            M = 0;
            cout << "Nomor Menu Tidak Valid" << endl << endl;
                system("pause");
                system ("cls");
        break;
    }
        // Percabangan Nota
        if (M == 1 || M == 2 || M == 3 || M == 4 || M == 5 || M == 6 || M == 7 || M == 8 || M == 9 || M == 10)
        {
            // Judul Nota
            cout << "==========================================" << endl;
            cout << setw(5) << left << "|";
            cout << "PROGRAM KASIR TOKO BESI PAK IMAN";
            cout << setw(5) << right << "|" << endl;
            cout << "------------------------------------------" << endl;
            cout << setw(15) << left << "|";
            cout << "NOTA PESANAN";
            cout << setw(15) << right << "|" << endl;
            cout << "==========================================" << endl << endl;

            cout << "Kode Transaksi          : " << kode << endl;
            cout << "Nama Pembeli            : " << nama << endl;
        }

            if (M == 1) {
                cout << "Nama Menu               : Palu" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp45.000,00" << endl;
            } else if (M == 2) {
                cout << "Nama Menu               : Paku" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp1.000,00" << endl;
            } else if (M == 3) {
                cout << "Nama Menu               : Paku Beton" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp2.000,00" << endl;
            } else if (M == 4) {
                cout << "Nama Menu               : Gergaji" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp65.000,00" << endl;
            } else if (M == 5) {
                cout << "Nama Menu               : Cangkul" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp250.000,00" << endl;
            } else if (M == 6) {
                cout << "Nama Menu               : Obeng" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp30.000,00" << endl;
            } else if (M == 7) {
                cout << "Nama Menu               : Pahat" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp190.000,00" << endl;
            } else if (M == 8) {
                cout << "Nama Menu               : Kuas" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp20.000,00" << endl;
            } else if (M == 9) {
                cout << "Nama Menu               : Engsel Pintu" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp20.000,00" << endl;
            } else if (M == 10) {
                cout << "Nama Menu               : Cat" << endl;
                cout << "Banyak Pesanan          : " << jumlah << endl;
                cout << "Haga Satuan             : Rp92.000,00" << endl;
            } 
            
if (M == 0){}
else {    
    cout << endl << "------------------------------------------" << endl << endl; 
    cout << "Total Harga             : " << total << endl << endl;

    
    if (total >= 125000) {
        cout << "(Diskon 2.5% (maks 21rb)  pembelian 125rb)" << endl << endl;
                DC = total * 0.025;
                    if (DC > 21000){
                        cout << "Nominal Diskon          : Rp21000" << endl;
                        cout << "Total Setelah Diskon    : Rp" << (total - 21000) << endl << endl;
                        cout << "------------------------------------------" << endl << endl;
                        cout << "Total Pembayaran                : Rp" << (total - 21000) << endl;
                        cout << "Jumlah Uang Yang Dibayarkan     : Rp";
                            cin >> jml;
                            if (total <= jml){
                                cout << "Jumlah Kembalian                : Rp" << (jml - (total - 21000)) << endl << endl;

                                
                                    cout << "------------------------------------------" << endl << endl;

                            } else if (total > jml){
                                cout << "Uang Yang Dibayarkan Kurang" << endl << endl;
                                system ("pause");
                            }
                    } else if (DC <= 21000){
                        cout << "Nominal Diskon          : Rp" << DC << endl;
                        cout << "Total Setelah Diskon    : Rp" << (total - DC) << endl << endl;
                        cout << "------------------------------------------" << endl << endl;
                        cout << "Total Pembayaran                : Rp" << (total - DC) << endl;
                        cout << "Jumlah Uang Yang Dibayarkan     : Rp";
                            cin >> jml;
                                if (total <= jml){
                                    cout << "Jumlah Kembalian                : Rp" << (jml - (total - DC)) << endl << endl;

                                    cout << "------------------------------------------" << endl << endl;
                                    
                                } else if (total > jml){
                                    cout << "Uang Yang Dibayarkan Kurang" << endl << endl;
                                    system ("pause");
                                }
                    }
            } else if (total < 125000){
                cout << "------------------------------------------" << endl << endl;
                cout << "Total Pembayaran                : Rp" << total << endl;
                cout << "Jumlah Uang Yang Dibayarkan     : Rp";
                    cin >> jml;
                    if (total <= jml){
                        cout << "Jumlah Kembalian                : Rp" << (jml - total) << endl << endl;

                        cout << "------------------------------------------" << endl << endl;

                    } else if (total > jml){
                        cout << "Uang Yang Dibayarkan Kurang" << endl << endl;
                        system ("pause");
                    }
            }
        
        if (total >= 1000000 || total <= 1250000) {
            cout << "Selamat Anda Mendapat Gantungan Kunci" << endl;
            cout << "Terimakasih Telah Berbelanja!!!" << endl;
            cout << "Semoga Harimu Menyenangkan " << nama << " :)" << endl << endl;
            cout << "------------------------------------------" << endl << endl;
            system ("pause");
        } else if (total >= 1260000 || total <= 1380000) {
            cout << "Selamat Anda Mendapat Mobil Mainan" << endl;
            cout << "Terimakasih Telah Berbelanja!!!" << endl;
            cout << "Semoga Harimu Menyenangkan " << nama << " :)" << endl << endl;
            cout << "------------------------------------------" << endl << endl;
            system ("pause");
        } else if (total >= 1390000 || total <= 2100000) {
            cout << "Selamat Anda Mendapat Bolpoin Pilot" << endl;
            cout << "Terimakasih Telah Berbelanja!!!" << endl;
            cout << "Semoga Harimu Menyenangkan " << nama << " :)" << endl << endl;
            cout << "------------------------------------------" << endl << endl;
            system ("pause");
        } else if (total >= 2110000 || total <= 4000000) {
            cout << "Selamat Anda Mendapat Vocher Makan Rp100000" << endl;
            cout << "Terimakasih Telah Berbelanja!!!" << endl;
            cout << "Semoga Harimu Menyenangkan " << nama << " :)" << endl << endl;
            cout << "------------------------------------------" << endl << endl;
            system ("pause");
        } else if (total > 4000000) {
            cout << "Selamat Anda Mendapat Mobil kijang" << endl;
            cout << "Terimakasih Telah Berbelanja!!!" << endl;
            cout << "Semoga Harimu Menyenangkan " << nama << " :)" << endl << endl;
            cout << "------------------------------------------" << endl << endl;
            system ("pause");
        }
        
                
}
}