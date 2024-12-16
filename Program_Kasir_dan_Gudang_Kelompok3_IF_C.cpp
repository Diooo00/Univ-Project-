#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctime>
using namespace std;

int pesanan; 
int jumlah;
int stock;
int jumlah_baru;
int stockbahan[8] = {80, 100, 60, 40, 40, 60, 200, 300}; 

// Fungsi Menambah stok
int plus_stock(int stockbahan[], int a, int b){
    stockbahan[a] += b;
}

// Fungsi untuk timestamp
void timestamp() {
    time_t now = time(0);
    tm *ltm = localtime(&now); 

    cout << 1900 + ltm->tm_year << "-"
         << setw(2) << setfill('0') << 1 + ltm->tm_mon << "-" 
         << setw(2) << setfill('0') << ltm->tm_mday << " "   
         << setw(2) << setfill('0') << ltm->tm_hour << ":"    
         << setw(2) << setfill('0') << ltm->tm_min << ":"   
         << setw(2) << setfill('0') << ltm->tm_sec << endl << endl;   
}

// Fungsi mengurasi stok
int minus_stock(int stockbahan[], int b, int c);

// Fungsi untuk menampilkan bagan menu
int menu() {
    cout << "+==============================================+\n";
    cout << setw(27) << "MENU\n";
    cout << "+==============================================+\n";
    cout << "|No.|      Nama Menu       |       Harga       |\n";
    cout << "+---|----------------------|-------------------+\n";
    cout << "| 1.|ayam potongan besar   |       Rp 13.000   |\n";
    cout << "| 2.|ayam potongan kecil   |       Rp 11.000   |\n";
    cout << "| 3.|kentang goreng        |       Rp 7.000    |\n";
    cout << "| 4.|burger                |       Rp 15.000   |\n";
    cout << "| 5.|pahe 1                |       Rp 17.000   |\n";
    cout << "| 6.|pahe 2                |       Rp 15.000   |\n";
    cout << "+---+----------------------+-------------------+\n";
    return 0;
}

// Fungsi untuk menampilkan nama item
void nama(int a) {
    if (a < 6) {
    string namaMenu[6] = {"Ayam Potongan Besar", "Ayam Potongan Kecil", 
                        "Kentang Goreng", "Burger", "Pahe 1", "Pahe 2"};
    cout << namaMenu[a] << endl;
    } else {
        cout << "Menu Tidak Ada - Anda Akan Kembali" << endl;
        getch();
    }
}

void bahan(int a) {
string namabahan[8] = {"Ayam Besar", "Ayam Kecil", "Kentang", "Roti Petti", "Daging Petti", "Sayuran", "Saos", "Teh"};
    if (a <= 7) {
    cout << namabahan[a] << endl;
    cout << "Stock bahan ini adalah = " << stockbahan[a] << endl;
    } else {
    cout << "Code Barang Tidak Ada" << endl;
    cout << "+===================================+" << endl;
    }
}

void all(int a) {
    cout << stockbahan[a];
    if(stockbahan[a] < 10){
        cout << "  ";
    }
    else if(stockbahan[a] < 100){
        cout << " ";
    }
}

// Fungsi untuk menghitung harga item
int harga(int a, int jumlah) {
    int hargaMenu[6] = {13000, 11000, 7000, 15000, 17000, 15000};
    int totalHarga = hargaMenu[a] * jumlah;
    cout << "Harga item: Rp " << totalHarga << endl;
    return totalHarga;
}

// Fungsi untuk menampilkan nota
void nota_end(int totalHarga[], int jumlahPesanan) {
    int totalBayar = 0;
    int uang;
    int sisa;
    int limit = 3;

    system ("cls");
    cout << "\n-- Nota Pembelian --\n";
    for (int i = 0; i < jumlahPesanan; i++) {
        cout << "Pesanan ke-" << i + 1 << " : Rp " << totalHarga[i] << endl;
        totalBayar += totalHarga[i];
    }
    cout << "Total Pembayaran = Rp " << totalBayar << endl;
    do {
    cout << endl;
    cout << "Masukkan Nominal Pembayaran = Rp. ";
        cin >> uang;
    if (uang >= totalBayar){
        sisa = uang - totalBayar;
        cout << "Sisa Kembalian Anda = Rp. " << sisa << endl << endl;
        timestamp();
        system ("pause");
        break;
    } else {
        system ("cls");
        limit--;
        cout << "Sisa Kembalian Anda = Rp. " << sisa << endl;
        cout << "Uang Anda Kurang!\nMasukkan nominal kembali" << endl;
        cout << "Kesempatan anda = " << limit << endl;
        cout << endl;
    }
    } while (uang >= totalBayar || limit >= 1);
    if (limit < 1){
        system ("cls");
        cout << "Kesempatan Habis" << endl;
        cout << "Nota Akan Dihapus" << endl;
    }
}

int gudang ();

int main() {
// DEKLARASI LOG IN
string uname;
string pass;
int log = 0;
int last = 4;

// DEKLARASI GUDANG
int pilihan;
char ulangi;

// DEKLARASI MENU
char tambah = 'Y';
int urutan = 1;
int jumlahPesanan = 0;
int totalHargaPesanan[7] = {0};  // Array untuk menyimpan total harga tiap pesanan

// LOGIN
    while (log < 5)
    {  
        system ("cls");
        cout << "+=========================+" << endl;
        cout << "|" << setw(24) << "CHICKEN & CO RESTAURANT" << setw(2) << "|" << endl;
        cout << "+=========================+" << endl;
        cout << endl;
        cout << "Masukkan Nama Anda         : ";
            getline(cin,uname);
        cout << "Masukkan Password anda     : ";
            cin >> pass;
                cin.ignore();

        if ((uname == "Satya Dio Putranto" && pass == "123240121") ||
            (uname == "Dimas Rizki Ardiansyah" && pass == "123240123") ||
            (uname == "Hizkia Damai Sejati" && pass == "123240132") ||
            (uname == "Zaky Mubarok Aljauhari" && pass == "123240107") ||
            (uname == "Lintang Purnama Surya Aji" && pass == "123240131")) {
            cout << "\nHalo " << uname << "\nSemoga Harimu Menyenangkan!\n";
            system ("pause");
            break;

            } else {
                system ("cls");
                log++;
                cout << endl;
                cout << "Log in Gagal!! Silahkan Coba Lagi" << endl;
                cout << "Kesempatan = " << last-- << endl;
                cout << endl;
                system ("pause");

                    } if (log == 5){
                        cout << "Terlalu Banyak Percobaan! Program Akan Segera Ditutup" << endl;
                        cout << "Bye Bye - Semoga Harimu Menyenangkan" << endl;
                        return 0;
                    }
    } 
    system ("cls");

// MAIN MENU
    do{
    system ("cls");
    cout << "1. Input Order\n2. Cek Stock\n3. Keluar" << endl;
    cout << "Masukkan Pilihan = ";
        cin >> pilihan;
    system ("cls");

    switch (pilihan) {

// CASE 1 KASIR
    case 1:
        tambah = 'Y';
        while ((tambah == 'Y' || tambah == 'y') && jumlahPesanan < 6) {
            system("cls");
            menu();

            if(pesanan < 6){
                cout << "Pesanan ke : " << urutan++ << endl; 
            }
            else{
                cout << "Pesanan ke : " << urutan << endl; 
            }
            // Meminta input nomor pesanan
            cout << "Input order number (1-6): ";
                cin >> pesanan;
                    pesanan--; // Menyesuaikan indeks array (0-5)

            // Menampilkan nama item
            if (pesanan < 6) {
            cout << "Nama Item: "; nama(pesanan);
            // Meminta jumlah item
            cout << "Jumlah item: ";
                cin >> jumlah;


            // Menghitung harga total pesanan
            int totalHarga = harga(pesanan, jumlah);
            totalHargaPesanan[jumlahPesanan] = totalHarga;
            jumlahPesanan++;
            minus_stock(stockbahan, pesanan, jumlah);

            // Menanyakan apakah ingin menambah pesanan
            cout << "Apakah Anda mau menambahkan pesanan lagi? (Y/N): ";
                cin >> tambah;

            // Menampilkan nota
            if((tambah == 'N') || (tambah == 'n')){
                nota_end(totalHargaPesanan, jumlahPesanan);
                jumlahPesanan = 0;
                urutan = 1;
            }
            } 
            }
            if(jumlahPesanan == 6){
            nota_end(totalHargaPesanan, jumlahPesanan);
            jumlahPesanan = 0;
            urutan = 1;
            }
            system("cls");
            cout << endl;
            cout << "Apakah Anda Mau Kembali ?" << endl;
            cout << "Y/N" << endl;
            cout << "Masukkan Pilihan = ";
                cin >> ulangi;
            break;

// CASE 2 GUDANG    
    case 2:
        gudang();
        cout << "Apakah Anda Mau Kembali ?" << endl;
        cout << "Y/N" << endl;
        cout << "Y = Kembali ke menu utama\n";
        cout << "N = Keluar dari sistem\n\n";
        cout << "Masukkan Pilihan = ";
            cin >> ulangi;
    break;

// C DEFAULT KELUAR
case 3:
        cout << "Apakah anda yakin ingin keluar ?" << endl;
        cout << "Tetap di menu tekan 'Y' " << endl;
        cout << "Keluar dari menu tekan  'N' " << endl;
        cout << "masukkan ";
            cin >> ulangi;
        break;

    default:
    ulangi = 'y';
    break;
    }
    }while (ulangi == 'y' || ulangi == 'Y');
}

int gudang (){

    int pilih;
    int umum;
    int code;
    char ulang1;

    do {
    cout << "======================================" << endl;
    cout << "|                                    |" << endl;
    cout << "|      Selamat Datang di Gudang      |" << endl;
    cout << "|                                    |" << endl;
    cout << "======================================" << endl;

    cout << endl;
    cout << "1.Cari Stock Per Bahan\n2.Lihat Umum\n3.Keluar" << endl;
    cout << "Masukkan Pilihan Anda (1/2/3) = ";
        cin >> pilih;
    cout << endl;

    
    switch (pilih) {
    case 1:
        system("cls");
        cout << "======================================" << endl;
        cout << "|                                    |" << endl;
        cout << "|   Selamat Datang di Stock Bahan    |" << endl;
        cout << "|                                    |" << endl;
        cout << "======================================" << endl;
        cout << endl;
        do {
        system ("cls");
        cout << "+===================================+" << endl;
        cout << "|   Code Bahan   |    Nama Bahan    |" << endl;
        cout << "+===================================+" << endl;
        cout << "|        1       |    Ayam Besar    |" << endl;
        cout << "|        2       |    Ayam Kecil    |" << endl;
        cout << "|        3       |    Kentang       |" << endl;
        cout << "|        4       |    Roti Petti    |" << endl;
        cout << "|        5       |    Daging Petti  |" << endl;
        cout << "|        6       |    Sayuran       |" << endl;
        cout << "|        7       |    Saos          |" << endl;
        cout << "|        8       |    Teh           |" << endl;
        cout << "+===================================+" << endl;
        cout << "masukkan code = ";
            cin >> code;
                code--;
            cout << "Nama Bahan = ";
                bahan(code);
            cout << endl;

        cout << "Apakah anda ingin mencari bahan lagi ?" << endl;
        cout << "Y/N" << endl;
        cout << "Masukkan pilihan = ";
            cin >> ulang1;
        } while (ulang1 == 'Y' || ulang1 == 'y');

                cout << "anda akan kembali ke gudang" << endl;
                system ("pause");
                
    case 2:
        system ("cls");
    do {
        cout << "======================================" << endl;
        cout << "|                                    |" << endl;
        cout << "|      Selamat Datang di Umum        |" << endl;
        cout << "|                                    |" << endl;
        cout << "======================================" << endl;
        cout << endl;
        cout << "Silahkan Pilih Menu Berikut" << endl;
        cout << endl;
        cout << "1. Tampilkan Semua" << endl;
        cout << "2. Barang Yang Tersisa" << endl;
        cout << "3. Tambah Item" << endl;
        cout << "Masukkan Pilihan (1/2/3) = ";
            cin >> umum;
            // SWITCH UMUM
            switch (umum) {
            case 1:
                system ("cls");
                cout << "+===================================+" << endl;
                cout << "|   Nama Bahan   |    Total Stock   |" << endl;
                cout << "+===================================+" << endl;
                cout << "|   Ayam Besar   |       "; all(0); cout << "        |" << endl;
                cout << "|   Ayam Kecil   |       "; all(1); cout << "        |" << endl;
                cout << "|    Kentang     |       "; all(2); cout << "        |" << endl;
                cout << "|   Roti Petti   |       "; all(3); cout << "        |" << endl;
                cout << "|  Daging Petti  |       "; all(4); cout << "        |" << endl;
                cout << "|    Sayuran     |       "; all(5); cout << "        |" << endl;
                cout << "|     Saos       |       "; all(6); cout << "        |" << endl;
                cout << "|     Teh        |       "; all(7); cout << "        |" << endl;
                cout << "+===================================+" << endl;
                cout << endl;
                cout << "Ingin Kembali Ke Umum? " << endl;
                cout << endl;
                cout << "Ketik 'Y' Untuk Menu Umum" << endl;
                cout << "Ketik 'N' Untuk Kembali" << endl;
                cout << "Ketikkan = ";
                    cin >> ulang1;
                break;

            case 2:
                system ("cls");
                cout << "+===================================+" << endl;
                cout << "|   Nama Bahan   |   Bahan Tersisa  |" << endl;
                cout << "+===================================+" << endl;
                cout << "|   Ayam Besar   |       "; all(0); cout << "        |" << endl;
                cout << "|   Ayam Kecil   |       "; all(1); cout << "        |" << endl;
                cout << "|    Kentang     |       "; all(2); cout << "        |" << endl;
                cout << "|   Roti Petti   |       "; all(3); cout << "        |" << endl;
                cout << "|  Daging Petti  |       "; all(4); cout << "        |" << endl;
                cout << "|    Sayuran     |       "; all(5); cout << "        |" << endl;
                cout << "|     Saos       |       "; all(6); cout << "        |" << endl;
                cout << "|     Teh        |       "; all(7); cout << "        |" << endl;
                cout << "+===================================+" << endl;
                cout << endl;
                cout << "Ingin Kembali Ke Umum? " << endl;
                cout << endl;
                cout << "Ketik 'Y' Untuk Menu Umum" << endl;
                cout << "Ketik 'N' Untuk Kembali" << endl;
                cout << "Ketikkan = ";
                    cin >> ulang1;
                break;

            case 3:
                do{
                system("cls");
                cout << "+===================================+" << endl;
                cout << "|   Nama Bahan   |    Kode Bahan    |" << endl;
                cout << "+===================================+" << endl;
                cout << "|   Ayam Besar   |        1         |" << endl;
                cout << "|   Ayam Kecil   |        2         |" << endl;
                cout << "|    Kentang     |        3         |" << endl;
                cout << "|   Roti Petti   |        4         |" << endl;
                cout << "|  Daging Petti  |        5         |" << endl;
                cout << "|    Sayuran     |        6         |" << endl;
                cout << "|     Saos       |        7         |" << endl;
                cout << "|     Teh        |        8         |" << endl;
                cout << "+===================================+" << endl;
                cout << endl;
                cout << "Item yang Ingin Ditambahkan (1-8)   : "; cin >> stock; stock--;
                cout << "Jumlah Item yang Ingin Ditambahkan  : "; cin >> jumlah_baru;
                plus_stock(stockbahan, stock, jumlah_baru);

                cout << "Apakah anda ingin menambahkan item lagi ?" << endl;
                cout << "Y/N" << endl;
                cout << "Masukkan pilihan = ";
                    cin >> ulang1;
                }while (ulang1 == 'Y' || ulang1 == 'y');

                cout << "anda akan kembali ke gudang" << endl;
                system ("pause");
                break;


            default:
                cout << endl;
                cout << "Code Tidak Ada" << endl;
                cout << "Apakah Anda Ingin Kembali Ke Gudang ? " << endl;
                cout << "jika iya tekan 'N' " << endl;
                cout << "jika tidak tekan 'x' " << endl;
                cout << "masukkan ";
                    cin >> ulang1;
                break;
            }
        system ("cls");

        } while (ulang1 == 'Y' || ulang1 == 'y');

            cout << "anda akan kembali ke gudang" << endl;
            system ("pause");
                break;

    case 3:
        ulang1 = 'y';
        cout << "Tetap di menu gudang tekan 'N' " << endl;
        cout << "Keluar ke umum tekan  'Y' " << endl;
        cout << "masukkan ";
            cin >> ulang1;
    break;
    
    default:
        ulang1 = 'n';
        break;
            }
        system ("cls");
    } while ((ulang1 == 'N') || (ulang1 == 'n'));
    return 0;
    }

int minus_stock(int stockbahan[], int b, int c) {
    // Deduct stock based on the value of 'b'
    switch (b) {
        case 0: // Ayam Besar and Saos
            stockbahan[0] -= c; // Ayam Besar
            stockbahan[6] -= c; // Saos
            break;
        case 1: // Ayam Kecil and Saos
            stockbahan[1] -= c; // Ayam Kecil
            stockbahan[6] -= c; // Saos
            break;
        case 2: // Kentang and Saos
            stockbahan[2] -= c; // Kentang
            stockbahan[6] -= c; // Saos
            break;
        case 3: // Roti Petti, Daging Petti, and Sayuran
            stockbahan[3] -= c; // Roti Petti
            stockbahan[4] -= c; // Daging Petti
            stockbahan[5] -= c; // Sayuran
            break;
        case 4: // Ayam Besar, Saos, and Teh
            stockbahan[0] -= c; // Ayam Besar
            stockbahan[6] -= c; // Saos
            stockbahan[7] -= c; // Teh
            break;
        case 5: // Ayam Kecil, Saos, and Teh
            stockbahan[1] -= c; // Ayam Kecil
            stockbahan[6] -= c; // Saos
            stockbahan[7] -= c; // Teh
            break;
        default:
            cout << "Menu tidak tersedia!" << endl;
            return -1; // Error code
    }

    // Check if any stock item went below zero, and if so, revert changes and show an error
    bool stockkurang = false;
    for (int i = 0; i < 8; i++) {
        if (stockbahan[i] < 0) {
            stockkurang = true;
        }
    }
    
    if (stockkurang) {
        cout << "Insufficient stock for this order. Reverting changes." << endl;
        switch (b) {
            case 0:
                stockbahan[0] += c;
                stockbahan[6] += c;
                break;
            case 1:
                stockbahan[1] += c;
                stockbahan[6] += c;
                break;
            case 2:
                stockbahan[2] += c;
                stockbahan[6] += c;
                break;
            case 3:
                stockbahan[3] += c;
                stockbahan[4] += c;
                stockbahan[5] += c;
                break;
            case 4:
                stockbahan[0] += c;
                stockbahan[6] += c;
                stockbahan[7] += c;
                break;
            case 5:
                stockbahan[1] += c;
                stockbahan[6] += c;
                stockbahan[7] += c;
                break;
        }
        return -1;
    }
    
    return 0; // Success
}