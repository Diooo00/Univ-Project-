#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string uname, pembeli, kode;
    int pw, menu, x, total, jb, diskon, hasil, bayar;
    int palu = 45, paku = 1, pb = 2, gergaji = 65, cangkul =250, obeng = 30;
    int pahat = 190, kuas = 20, engsel = 20, cat = 92;

    cout << "==============================\n";
    cout << setiosflags(ios::left) << setw(6) << "|" << "Toko Besi Pak Iman";
    cout << setiosflags(ios::right) << setw(6) <<"|" ;   
    cout << "\n==============================";
    do
    {
        cout << "\nUSERNAME   : "; cin >> uname;
        cout << "PASSWORD   : "; cin >> pw;

        if (uname != "Dio" && pw != 123240121){
            system("cls");
            cout << "==============================\n";
            cout << setiosflags(ios::left) << setw(6) << "|" << "Toko Besi Pak Iman";
            cout << setiosflags(ios::right) << setw(6) <<"|" ;   
            cout << "\n==============================\n";
            cout << "Username atau Password Salah!\nHarap Masukkan Kembali Data\n";
        }
        else{

        }
   
    } while (uname != "Dio" && pw != 123240121);
    
        cout << "Login Berhasil\n";
        system("pause");
        system("cls");
        cout << "\n==============================\n";
        cout << setiosflags(ios::right) << "|" << setw(19) << "Menu Pesanan";
        cout << setiosflags(ios::right) << setw(10) <<"|" ;   
        cout << "\n==============================\n"; 
        cout << "Kode Transaksi   : "; cin >> kode; cin.ignore();
        cout << "Nama Pembeli     : "; getline(cin,pembeli);


        cout << "\n=============================================\n";
        cout << setiosflags(ios::left) << "|" << setw(3) << "NO";
        cout << setiosflags(ios::right) << setw(2) <<"|" ;   
        cout << setiosflags(ios::left) << setw(14) << "Nama Menu";
        cout << setiosflags(ios::right) << setw(8) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(11) << "Harga";
        cout << setiosflags(ios::right) << setw(6) <<"|" ;    
        cout << "\n=============================================\n";         
                cout << setiosflags(ios::left) << "|" << setw(2) << "1.";
        cout << setiosflags(ios::right) << setw(3) <<"|" ;   
        cout << setiosflags(ios::left) << setw(4) << "Palu";
        cout << setiosflags(ios::right) << setw(18) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(12) << "Rp 45.000,00";
        cout << setiosflags(ios::right) << setw(5) <<"|" ;    
                cout << setiosflags(ios::left) << "\n|" << setw(2) << "2.";
        cout << setiosflags(ios::right) << setw(3) <<"|" ;   
        cout << setiosflags(ios::left) << setw(4) << "Paku";
        cout << setiosflags(ios::right) << setw(18) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(11) << "Rp 1.000,00";
        cout << setiosflags(ios::right) << setw(6) <<"|" ;         
                cout << setiosflags(ios::left) << "\n|" << setw(2) << "3.";
        cout << setiosflags(ios::right) << setw(3) <<"|" ;   
        cout << setiosflags(ios::left) << setw(10) << "Paku Beton";
        cout << setiosflags(ios::right) << setw(12) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(11) << "Rp 2.000,00";
        cout << setiosflags(ios::right) << setw(6) <<"|" ;
                cout << setiosflags(ios::left) << "\n|" << setw(2) << "4.";
        cout << setiosflags(ios::right) << setw(3) <<"|" ;   
        cout << setiosflags(ios::left) << setw(7) << "Gergaji";
        cout << setiosflags(ios::right) << setw(15) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(12) << "Rp 65.000,00";
        cout << setiosflags(ios::right) << setw(5) <<"|" ;
                cout << setiosflags(ios::left) << "\n|" << setw(2) << "5.";
        cout << setiosflags(ios::right) << setw(3) <<"|" ;   
        cout << setiosflags(ios::left) << setw(7) << "Cangkul";
        cout << setiosflags(ios::right) << setw(15) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(13) << "Rp 250.000,00";
        cout << setiosflags(ios::right) << setw(4) <<"|" ;
                cout << setiosflags(ios::left) << "\n|" << setw(2) << "6.";
        cout << setiosflags(ios::right) << setw(3) <<"|" ;   
        cout << setiosflags(ios::left) << setw(5) << "Obeng";
        cout << setiosflags(ios::right) << setw(17) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(12) << "Rp 30.000,00";
        cout << setiosflags(ios::right) << setw(5) <<"|" ;
                cout << setiosflags(ios::left) << "\n|" << setw(2) << "7.";
        cout << setiosflags(ios::right) << setw(3) <<"|" ;   
        cout << setiosflags(ios::left) << setw(5) << "Pahat";
        cout << setiosflags(ios::right) << setw(17) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(11) << "Rp 190.000,00";
        cout << setiosflags(ios::right) << setw(4) <<"|" ;
                cout << setiosflags(ios::left) << "\n|" << setw(2) << "8.";
        cout << setiosflags(ios::right) << setw(3) <<"|" ;   
        cout << setiosflags(ios::left) << setw(4) << "Kuas";
        cout << setiosflags(ios::right) << setw(18) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(12) << "Rp 20.000,00";
        cout << setiosflags(ios::right) << setw(5) <<"|" ;
                cout << setiosflags(ios::left) << "\n|" << setw(2) << "9.";
        cout << setiosflags(ios::right) << setw(3) <<"|" ;   
        cout << setiosflags(ios::left) << setw(12) << "Engsel Pintu";
        cout << setiosflags(ios::right) << setw(10) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(12) << "Rp 20.000,00";
        cout << setiosflags(ios::right) << setw(5) <<"|" ;
                cout << setiosflags(ios::left) << "\n|" << setw(2) << "10.";
        cout << setiosflags(ios::right) << setw(2) <<"|" ;   
        cout << setiosflags(ios::left) << setw(3) << "Cat";
        cout << setiosflags(ios::right) << setw(19) <<"|" ;  
        cout << setiosflags(ios::left)  << setw(12) << "Rp 92.000,00";
        cout << setiosflags(ios::right) << setw(5) <<"|" ;
        cout << "\n=============================================\n\n";
        
        do
        {
        cout << "\nMasukkan Nomor Menu    : "; cin >> menu;

        switch (menu)
        {
        case 1 : 
                cout << "Nama Barang            : Palu";
                cout << "\nHarga Satuan           : Rp 45.000,00";
                cout << "\nBanyak Pesanan         : "; cin >> jb;
                x=1;
                break;
        
        case 2 :
                cout << "Nama Barang            : Paku";
                cout << "\nHarga Satuan           : Rp 1.000,00";
                cout << "\nBanyak Pesanan         : "; cin >> jb;
                x=2;
                break;
        
        case 3 :
                cout << "Nama Barang            : Palu Beton";
                cout << "\nHarga Satuan           : Rp 2.000,00";
                 cout << "\nBanyak Pesanan         : "; cin >> jb;
               x=3;
                break;\
        
        case 4 :
                cout << "Nama Barang            : Gergaji";
                cout << "\nHarga Satuan           : Rp 65.000,00";
                cout << "\nBanyak Pesanan         : "; cin >> jb;
                x=4;
                break;
        
        case 5 :
                cout << "Nama Barang            : Cangkul";
                cout << "\nHarga Satuan           : Rp 250.000,00";
                cout << "\nBanyak Pesanan         : "; cin >> jb;
                x=5;
                break;
        
        case 6 :
                cout << "Nama Barang            : Obeng";
                cout << "\nHarga Satuan           : Rp 30.000,00";
                cout << "\nBanyak Pesanan         : "; cin >> jb;
                x=6;
                break;
        
        case 7 :
                cout << "Nama Barang            : Pahat";
                cout << "\nHarga Satuan           : Rp 190.000,00";
                cout << "\nBanyak Pesanan         : "; cin >> jb;
                x=7;
                break;
        
        case 8 : 
                cout << "Nama Barang            : Kuas";
                cout << "\nHarga Satuan           : Rp 20.000,00";
                cout << "\nBanyak Pesanan         : "; cin >> jb;
                x=8;
                break;
        
        case 9 :
                cout << "Nama Barang            : Engsel Pintu";
                cout << "\nHarga Satuan           : Rp 20.000,00";
                cout << "\nBanyak Pesanan         : "; cin >> jb;
                x=9;
                break;

        case 10 :
                cout << "Nama Barang            : Cat";
                cout << "\nHarga Satuan           : Rp 92.000,00";
                cout << "\nBanyak Pesanan         : "; cin >> jb;
                x=10;
                break;

        default:
                cout << "Nomor Menu yang Anda Masukkan Tidak Valid!\nHarap Pilih Menu Sesuai Pada Tabel\n";
                system ("pause");
                break;
        }
        }while (menu > 10);
        
         
        if (x == 1){
                total = jb*palu;
                cout << "total Harga            : Rp " << total << ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Palu";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << palu << ".000,00";
                cout << "\n=========================================\n"; 

        }
        else if (x == 2){
                total = jb*paku;
                cout << "total Harga            : Rp " << total<< ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Paku";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << paku << ".000,00";
                cout << "\n=========================================\n";
        }
        else if(x == 3){
                total = jb*pb;
                cout << "total Harga            : Rp " << total << ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Paku Beton";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << pb << ".000,00";
                cout << "\n=========================================\n";
        }
        else if(x == 4){
                total = jb*gergaji;
                cout << "total Harga            : Rp " << total << ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Gergaji";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << gergaji << ".000,00";
                cout << "\n=========================================\n";
        }
        else if(x == 5){
                total = jb*cangkul;
                cout << "total Harga            : Rp " << total << ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Cangkul";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << cangkul << ".000,00";
                cout << "\n=========================================\n";
        }
        else if(x == 6){
                total = jb*obeng;
                cout << "total Harga            : Rp " << total << ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Obeng";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << obeng << ".000,00";
                cout << "\n=========================================\n";
        }
        else if(x == 7){
                total = jb*pahat;
                cout << "total Harga            : Rp " << total << ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Pahat";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << pahat << ".000,00";
                cout << "\n=========================================\n";
        }
        else if(x == 8){
                total = jb*kuas;
                cout << "total Harga            : Rp " << total << ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Kuas";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << kuas << ".000,00";
                cout << "\n=========================================\n";
        }
        else if(x == 9){
                total = jb*engsel;
                cout << "total Harga            : Rp " << total<< ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Emgsel Pintu";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << engsel << ".000,00";
                cout << "\n=========================================\n";
        }
        else if(x == 10){
                total = jb*cat;
                cout << "total Harga            : Rp " << total << ".000,00\n";
                system("pause");
                system("cls");
                cout << "=========================================\n";
                cout << setiosflags(ios::right) << "|" << setw(30) << "NOTA PEMBELIAN   ";
                cout << setiosflags(ios::right) << setw(10) <<"|" ;   
                cout << "\n=========================================\n"; 
                cout << "Kode Transaksi         : " << kode;
                cout << "\nNama Pembeli           : " << pembeli;
                cout << "\nNama Barang            : Cat";
                cout << "\nBanyak Pesanan         : " << jb;
                cout << "\nHarga Per Item         : Rp " << cat << ".000,00";
                cout << "\n=========================================\n";
        }

        hasil = total - diskon;
        diskon = total/40;

        if (total >= 125){
                cout << "=======================================================\n";
                cout << "Diskon 2.5% (Maksimal Rp 21.000,00) Min Pembelian 125rb\n";
                cout << "=======================================================\n";
                        if (diskon < 21){
                        cout << "Nominal Diskon                   : Rp " << diskon << ".000,00\n";
                        cout << "Jumlah Pembayaran Setelah Diskon : Rp " << hasil-diskon << ".000,00\n";
                        cout << "Jumlah Uang yang Dibayarkan      : Rp "; cin >> bayar; cout << ".000,00\n";
                                if (bayar >= total){
                                        cout << "Kembalian                      : Rp " << hasil-bayar << ".000,00";
                                }
                                else if (bayar < hasil){
                                        cout << "Uang Anda Tidak Cukup!";
                                }
                        }
                        else if(diskon >= 21)
                        cout << "Nominal Diskon                   : Rp 21.000,00\n";
                        cout << "Jumlah Pembayaran Setelah Diskon : Rp " << total-21 << ".000,00\n";
                         cout << "Jumlah Uang yang Dibayarkan      : Rp "; cin >> bayar; cout << ".000,00\n";

                                if (bayar >= total){
                                        cout << "Kembalian                      : Rp " << hasil-bayar << ".000,00";
                                }
                                else if (bayar < hasil){
                                        cout << "Uang Anda Tidak Cukup!";
                                }
        }

        else {
                cout << "Total Harga                    : Rp " << total << ".000,00\n";
                cout << "Total Pembayaran               : Rp " << total << ".000,00\n";
                cout << "Jumlah Uang yang Dibayarkan    : Rp " ; cin >> bayar; cout << ".000,00\n";
                if (bayar >= total){
                        cout << "Kembalian                      : Rp " << total-bayar << ".000,00";
                }
                else if (bayar < total){
                        cout << "Uang Anda Tidak Cukup!";
                }
        }
        system("pause");
}