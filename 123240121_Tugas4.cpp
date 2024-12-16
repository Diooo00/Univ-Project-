#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int banyak_pesan = 0;
bool balik = false;
int banyak_user = 0;
int kesempatan = 3;
string akun[100][3];
int kode[11] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011};
string jenis[11] = {"Ayam Goreng", "Lotek", "Gado-Gado", "Wagyu A5", "Gurame Bakar", "Bebek Peking", "Telur Triceratops", "Daging Zombie", "Magelangan Mba Lis", "Babi Guling", "Unagi"};
int harga[11] = {18750, 12190, 10680, 767250, 45328, 31313, 56570, 123456, 12100, 27894, 60456};
string daftarPesanan[11];
float hargaPesanan[11][3];
void login();
void daftar();
void menu();

int main(){
    int choice;
    bool ulang = true;

    while (ulang){
        system("cls");
        cout << "Banyaknya user : " << banyak_user;
        cout << "\nSelamat Datang!\n";
        cout << "1>. Daftar\n";
        cout << "2>. Login\n";
        cout << "3>. Keluar\n\n";
        cout << "Pilihan : \n";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            daftar();
            break;
        case 2:
            login();
            if (balik == true){
                menu();
            }
            break;
        case 3:
            ulang = false;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
        }
        cout << "Banyaknya user: " << banyak_user << endl;
    }

    void menu();
}

void login(){
    do{
        system("cls");
        string input_nama, input_pass;
        cout << "Masukan username anda: ";
        getline(cin, input_nama);
        cout << "Masukan pass anda    : ";
        getline(cin, input_pass);
        if (banyak_user == 0){
            cout << "User tidak ada!\nharap daftar terlebih dahulu\n";
            balik = false;
            kesempatan = 0;
        }
        else{
            for (int i = 0; i < banyak_user; ++i){
                if (input_nama == akun[i][0] && input_pass == akun[i][1]){
                    cout << "Login Berhasil!\n";
                    if (balik = true){
                        i = banyak_user;
                    }
                    kesempatan = 0;
                }
                else{
                    balik = 0;
                }
            }
            if (balik == 0){
                if(kesempatan > 1){
                    kesempatan--;
                    cout << "username atau password salah !" << endl;
                    cout << "sisa percobaan " << kesempatan << endl;
                }
                else{
                    cout << "Kesempatan anda telah habis!";
                    cout << "\nProgram akan ditutup, silahkan buka ulang program\n";
                    getch();
                    break;
                }
                }
        }
        system("pause");
    } while (kesempatan > 0);
    kesempatan = 3;
}

void daftar(){
    string nama, user, pass;
    bool ada = 0;
    system("cls");
    cout << "Masukkan nama anda : ";
    getline(cin, akun[banyak_user][2]);
    cout << "Masukan username anda: ";
    getline(cin, akun[banyak_user][0]);
    cout << "Masukan pass anda: ";
    getline(cin, akun[banyak_user][1]);


    for (int i = 0; i < banyak_user; i++){
        if(akun[banyak_user][0] == akun [i][0]){
            ada = 1;
        }
    }
    if(ada){
        cout << "Username sudah ada\n";
        cin.get();

    }
    else {
        banyak_user++;
        cout << "Registrasi berhasil!" << endl;
    }
}

void menu(){
    bool keluar = false;
    int pilihan, kdBarang, jumlah;
    string namaCust[10];
    bool check = false, barang = false;
    char tambahan;
    while (!keluar){
        system("cls");
        cout << "[1] Tambah pesan" << endl;
        cout << "[2] Lihat daftar pesanan" << endl;
        cout << "[3] keluar" << endl;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            do{
                system("cls");
                cout << "Kode Barang" << "        " << "Nama Barang" << "          " << "Harga Barang" << endl;
                for (int i = 0; i < 11; i++){
                    cout << "   " << kode[i] << setw(23) << setfill(' ') << jenis[i] << setw(18) << harga[i] << endl;
                }
                cout << endl;
                cout << "Masukkan nama customer : ";
                cin.ignore();
                getline(cin,namaCust[banyak_pesan]);
                cout << "Masukkan kode barang : ";
                cin >> kdBarang;
                if (kdBarang >= kode[0] && kdBarang <= kode[10]){
                    for (int i = 0; i < 11; i++){
                        check = true;
                        if (kdBarang == kode[i]){
                            barang = true;
                        }

                        if (barang == true){
                            cout << "Barang yang ingin anda beli adalah " << jenis[i] << endl;
                            cout << "Berapa banyak barang yang ingin anda beli  : ";
                            cin >> jumlah;
                            cout << "Harga satuan barang tersebut adalah " << harga[i] << endl;
                            int subTotal = jumlah * harga[i];
                            cout << "SubTotal harga yang harus anda bayar = " << subTotal << endl;
                            float Total = (subTotal * 0.1) + subTotal;
                            cout << "Total harga setelah ditambah pajak 10% = " << Total << endl;
                            daftarPesanan[banyak_pesan] = jenis[i];
                            hargaPesanan[banyak_pesan][2] = harga[i];
                            hargaPesanan[banyak_pesan][0] = subTotal;
                            hargaPesanan[banyak_pesan][1] = Total;
                            banyak_pesan++;
                            cout << "Apakah ada barang tambahan (y/n) ? : ";
                            cin >> tambahan;
                            barang = false;
                        }
                    }
                }
                else{
                    cout << "Kode barang tidak valid!\n";
                    cin.get();
                }

            } 
            while (tambahan != 'n');
            break;

        case 2:
        system("cls");
            if (banyak_pesan == 0){
                cout << "Anda belum memesan!\nSilahkan lakukan pemesanan terlebih dahulu\n";
            }
            else{
            cout << "====================Daftar Pesanan Anda-===================" << endl;
                for (int i = 0; i < banyak_pesan; i++){
                    cout << "|Nama Customer  : " << namaCust[i] << "|" << endl;
                    cout << "|Nama Barang    : " << daftarPesanan[i] << "|" << endl;
                    cout << "|Harga Satuan   : " << hargaPesanan[i][2] << "|" << endl;
                    cout << "|Harga Subtotal : " << hargaPesanan[i][0] << "|" << endl;
                    cout << "|Harga Total    : " << hargaPesanan[i][1] << "|" << endl;
                    cout << "===========================================================" << endl;
                }
            }
            cin.ignore();
            cin.get();
            break;
        case 3:
            keluar = true;
            break;
        default:
            cout << "Pilihan menu tidak valid!\nHarap pilih nomor menu yang valid!\n";
            cin.ignore();
            cin.get();
            break;
        }
    }
}