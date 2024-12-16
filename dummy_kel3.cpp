#include <iostream>
#include <iomanip>
using namespace std;

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
    }
}

void bahan(int a) {
    if (a <= 7) {
    string namabahan[8] = {"Ayam Besar", "Ayam Kecil", "Kentang", "Roti Petti", "Daging Petti", "Sayuran", "Saos", "Teh"};
    int stockbahan[8] = {80, 100, 60, 40, 40, 60, 200, 300};
    cout << namabahan[a] << endl;
    cout << "Stock bahan ini adalah = " << stockbahan[a] << endl;
    } else {
    cout << "Code Barang Tidak Ada" << endl;
    cout << "+===================================+" << endl;
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
void nota(int totalHarga[], int jumlahPesanan) {
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
        cout << "Sisa Kembalian Anda = Rp. " << sisa << endl;
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
        cout << "3. Barang Yang Habis" << endl;
        cout << "Masukkan Pilihan (1/2/3) = ";
            cin >> umum;
            // SWITCH UMUM
            switch (umum) {
            case 1:
                system ("cls");
                cout << "+===================================+" << endl;
                cout << "|   Nama Bahan   |    Total Stock   |" << endl;
                cout << "+===================================+" << endl;
                cout << "|   Ayam Besar   |        80        |" << endl;
                cout << "|   Ayam Kecil   |       100        |" << endl;
                cout << "|    Kentang     |        60        |" << endl;
                cout << "|   Roti Petti   |        40        |" << endl;
                cout << "|  Daging Petti  |        40        |" << endl;
                cout << "|    Sayuran     |        60        |" << endl;
                cout << "|     Saos       |       200        |" << endl;
                cout << "|     Teh        |       300        |" << endl;
                cout << "+===================================+" << endl;
                cout << endl;
                cout << "Ingin Kembali Ke Umum? " << endl;
                cout << endl;
                cout << "Ketik 'Y' Untuk Melihat Umum Lagi" << endl;
                cout << "Ketik 'N' Untuk Kembali" << endl;
                cout << "Ketikkan = ";
                    cin >> ulang1;
                break;

            case 2:
                system ("cls");
                cout << "+===================================+" << endl;
                cout << "|   Nama Bahan   |   Bahan Tersisa  |" << endl;
                cout << "+===================================+" << endl;
                cout << "|   Ayam Besar   |        80        |" << endl;
                cout << "|   Ayam Kecil   |       100        |" << endl;
                cout << "|    Kentang     |        60        |" << endl;
                cout << "|   Roti Petti   |        40        |" << endl;
                cout << "|  Daging Petti  |        40        |" << endl;
                cout << "|    Sayuran     |        60        |" << endl;
                cout << "|     Saos       |       200        |" << endl;
                cout << "|     Teh        |       300        |" << endl;
                cout << "+===================================+" << endl;
                cout << endl;
                cout << "Ingin Kembali Ke Umum? " << endl;
                cout << endl;
                cout << "Ketik 'Y' Untuk Melihat Umum Lagi" << endl;
                cout << "Ketik 'N' Untuk Kembali" << endl;
                cout << "Ketikkan = ";
                    cin >> ulang1;
                break;

            case 3:
                system ("cls");
                cout << "+================+" << endl;
                cout << "|   Nama Bahan   |" << endl;
                cout << "+================+" << endl;
                cout << "|                |" << endl;
                cout << "+================+" << endl;
                cout << endl;
                cout << "Ingin Kembali Ke Umum? " << endl;
                cout << endl;
                cout << "Ketik 'Y' Untuk Melihat Umum Lagi" << endl;
                cout << "Ketik 'N' Untuk Kembali" << endl;
                cout << "Ketikkan = ";
                    cin >> ulang1;
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

    default:
        cout << "Tetap di menu gudang tekan 'N' " << endl;
        cout << "Keluar ke umum tekan  'Y' " << endl;
        cout << "masukkan ";
            cin >> ulang1;
        break;
            }
        system ("cls");
    } while (ulang1 == 'N');
    return 0;
    }

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
int pesanan; 
int jumlah;
int jumlahPesanan = 0;
int totalHargaPesanan[7] = {0};  // Array untuk menyimpan total harga tiap pesanan

// LOGIN
    while (log < 5)
    {  
        system ("cls");
        cout << endl;
        cout << "+========================+" << endl;
        cout << setw(24) << "|  FUFU FAFA RESTAURANT  |" << endl;
        cout << "+========================+" << endl;

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
            cout << "\nHaloo " << uname << "\nSemoga Harimu Menyenangkan!\n";
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
    } system ("cls");

// MAIN MENU
    do{
    cout << "1. Input Order\n2. Cek Stock\n3. Keluar" << endl;
    cout << "Masukkan Pilihan = ";
        cin >> pilihan;
    system ("cls");
    tambah = 'N';

    switch (pilihan) {

// CASE 1 KASIR
    case 1:
        while ((tambah == 'Y' || tambah == 'y') && jumlahPesanan <= 6) {
            system("cls");
            menu();

            // Meminta input nomor pesanan
            cout << "Input order number (1-6): ";
                cin >> pesanan;
                    pesanan--; // Menyesuaikan indeks array (0-5)

                nama(pesanan);
            if (pesanan < 6) {
            // Menampilkan nama item
            cout << "Nama Item: ";
            // Meminta jumlah item
            cout << "Jumlah item: ";
                cin >> jumlah;

            // Menghitung harga total pesanan
            int totalHarga = harga(pesanan, jumlah);
            totalHargaPesanan[jumlahPesanan] = totalHarga;
            jumlahPesanan++;

            // Menanyakan apakah ingin menambah pesanan
            cout << "Apakah Anda mau menambahkan pesanan lagi? (Y/N): ";
                cin >> tambah;

            // Menampilkan nota
            nota(totalHargaPesanan, jumlahPesanan);
            }
            }

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
        cout << "Masukkan Pilihan = ";
            cin >> ulangi;
    break;

// C DEFAULT KELUAR
    default:
        cout << "Apakah anda yakin ingin keluar ?" << endl;
        cout << "Tetap di menu tekan 'Y' " << endl;
        cout << "Keluar dari menu tekan  'N' " << endl;
        cout << "masukkan ";
            cin >> ulangi;
    break;
    }
    }while (ulangi == 'y' || ulangi == 'Y');

}
