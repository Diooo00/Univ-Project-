#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void login(bool &berhasil);
void daftar();
void menu();
int banyakPesan = 0;
string akun[100][3];
int kode[11] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011};
string jenis[11] = {"Ayam Goreng", "Lotek", "Gado-Gado", "Wagyu A5", "Gurame Bakar", "Bebek Peking", "Telur Triceratops", "Daging Zombie", "Magelangan Mba Lis", "Babi Guling", "Unagi"};
int harga[11] = {18750, 12190, 10680, 767250, 45328, 31313, 56570, 123456, 12100, 27894, 60456};
string daftarmenu[11];
float hargaPesanan[11][3];
bool found = false;
int banyak_user = 0;
int life = 3;

int main(){
    int choice;
    bool ulang = true;

    while (ulang){
        system("cls");
        cout << "Banyaknya user : " << banyak_user << endl;
        cout << "Selamat Datang!" << endl;
        cout << "1.> Daftar" << endl;
        cout << "2.> Login" << endl;
        cout << "3.> Keluar" << endl;
        cout << "Pilihan: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            daftar();
            break;
        case 2:
            login();
            if(banyak_user==0){   
                cout << "Harap Register Dahulu!";
                cin.get();
                menu();
            }
            else{
                bool berhasil = 0;
                login(berhasil);
                if(berhasil){
                    ulang = 0;
                }
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
}

void daftar() {
    system("cls");
    if (banyak_user == 100) {
        cout << "Jumlah pengguna maksimum telah tercapai." << endl;
        system("pause");
        return;
    }

    string nama, username, password;

    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan Username : ";
    getline(cin, username);
    cout << "Masukkan Password : ";
    getline(cin, password);

    bool ada = 0;

        for(int i = 0; i < banyak_user; i++){
            if(nama==akun[i][1]){
                ada = 1;
            }
        }
        if(ada){
            cout << "Username sudah dipakai" << endl;
            cin.get();
        }
        else{
        akun[banyak_user][0] = nama;       // Nama
        akun[banyak_user][1] = username;  // Username
        akun[banyak_user][2] = password;  // Password
        banyak_user++;
        }

    // Simpan data pengguna di array

    cout << "Pendaftaran berhasil!" << endl;
    system("pause");
}

void login(bool &berhasil){
    system("cls");
    string nama,username,password;

    cout << "Masukkan Username : ";
    cin.ignore();
    getline(cin,username);
    cout << "masukkan Password : ";
    getline(cin,password);

    bool ada = false;
    for(int i = 0;i < banyak_user; i++){
        if(username==akun[i][1] && password==akun[i][2]){
            ada = true;
        }
    }
    if(ada){
        cout << "Login Berhasil\n";
        berhasil = true;
    }
    else{
        cout << "Username dan Password Salah, Harap Isi Kembali!\n";
    }
}


void menu()
{
    bool keluar = false;
    int pilihan, kdBarang, jumlah;
    string namaCust[10];
    bool check = false, barang = false;
    char tambahan;
    while (!keluar)
    {
        system("cls");
        cout << "[1] Tambah Pesanan" << endl;
        cout << "[2] Lihat Daftar Pesanan" << endl;
        cout << "[3] keluar" << endl;
        cout << "Masukkan Pilihan Anda : "; cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            do
            {
                system("cls");
                cout << "Kode Barang" << "        " << "Nama Barang" << "          " << "Harga Barang" << endl;
                for (int i = 0; i < 11; i++)
                {
                    cout << "   " << kode[i] << setw(23) << setfill(' ') << jenis[i] << setw(18) << harga[i] << endl;
                }
                cout << endl;
                cout << "Masukkan nama customer : ";
                cin >> namaCust[banyakPesan];
                cout << "Masukkan kode barang : ";
                cin >> kdBarang;
                if (kdBarang > kode[0] && kdBarang < kode[10])
                {

                    for (int i = 0; i < 11; i++)
                    {
                        check = true;
                        if (kdBarang == kode[i])
                        {
                            barang = true;
                        }

                        if (barang == true)
                        {
                            cout << "Barang yang ingin anda beli adalah " << jenis[i] << endl;
                            cout << "Berapa banyak barang yang ingin anda beli  : ";
                            cin >> jumlah;
                            cout << "Harga satuan barang tersebut adalah " << harga[i] << endl;
                            int subTotal = jumlah * harga[i];
                            cout << "SubTotal harga yang harus anda bayar = " << subTotal << endl;
                            float Total = (subTotal * 0.1) + subTotal;
                            cout << "Total harga setelah ditambah pajak 10% = " << Total << endl;
                            jenis[banyakPesan] = jenis[i];
                            hargaPesanan[banyakPesan][2] = harga[i];
                            hargaPesanan[banyakPesan][0] = subTotal;
                            hargaPesanan[banyakPesan][1] = Total;
                            banyakPesan++;
                            cout << "Apakah ada barang tambahan (y/n) ? : ";
                            cin >> tambahan;
                            barang = false;
                        }
                    }
                }
                else
                {
                    cout << "Kode barang tidak valid!\n";
                    cin.ignore();
                    cin.get();
                }

            } while (tambahan != 'n');
            break;

        case 2:
        system("cls");
            if (banyakPesan == 0)
            {
                cout << "Anda belum memesan!\nSilahkan lakukan pemesanan terlebih dahulu\n";
            }
            else
            {
            cout << "--------------------Daftar Pesanan Anda--------------------" << endl;
                for (int i = 0; i < banyakPesan; i++)
                {
                    cout << "Nama Customer  : " << namaCust[i] << endl;
                    cout << "Nama Barang    : " << jenis[i] << endl;
                    cout << "Harga Satuan   : " << hargaPesanan[i][2] << endl;
                    cout << "Harga Subtotal : " << hargaPesanan[i][0] << endl;
                    cout << "Harga Total    : " << hargaPesanan[i][1] << endl;
                    cout << "-----------------------------------------------------------" << endl;
                }
            }
            cin.ignore();
            cin.get();
            break;
        case 3:
            keluar = true;
            break;
        default:
            cout << "Nomor menu tidak valid!\nMohon pilih nomor menu yang valid!\n";
            cin.ignore();
            cin.get();
            break;
        }
    }
}