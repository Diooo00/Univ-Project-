// #include <iostream>
// using namespace std;

// string account[10][3];
// string namaCustomer[100];
// int subtotalHarga[100];
// int totalHarga[100];
// int daftarKode[100];
// int jumlahUser = 0;
// int jumlahPesanan = 0;
// int percobaan = 3;
// bool keluar = false;
// void menuUtama();
// int kodeBarang[11] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011};
// string jenisBarang[11] = {"Ayam Goreng", "Lotek", "Gado-Gado", "Wagyu A5", "Gurame Bakar", "Bebek Peking", "Telur Triceratops", "Daging Zombie", "Magelangan Mba Lis", "Babi Guling", "Unagi"};
// int hargaBarang[11] = {18750, 12190, 10680, 767250, 45328, 31313, 56570, 123456, 12100, 27894, 60456};

// int cekKode(int &kode) {
//     int i;
//     for (i = 0; i < 11; i++) {
//         if (kodeBarang[i] == kode) {
//             return i;
//         }
//     }
// }

// bool cekLogin(string user, string pass) {
//     for (int i = 0; i < jumlahUser; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (user == account[i][j + 1] && pass == account[i][j + 2]) {
//                 return true;
//             } else {
//                 return false;
//             }
//         }
//     }
// }

// void daftar() {
//     string nama, username, password;
//     system("cls");
//     cout << "Silahkan Daftar Akun" << endl;
//     cout << "Masukkan Nama\t\t: ";
//     cin >> account[jumlahUser][jumlahUser];
//     cout << "Masukkan Username\t: ";
//     cin >> account[jumlahUser][jumlahUser + 1];
//     cout << "Masukkan Password\t: ";
//     cin >> account[jumlahUser][jumlahUser + 2];
//     jumlahUser++;
// }

// void lihatPesanan() {
//     system("cls");
//     cout << "Lihat Pesanan" << endl;
//     for (int i = 0; i < jumlahPesanan; i++) {
//         cout << "Nama : " << namaCustomer[i] << endl;
//         cout << "Jenis Barang : " << jenisBarang[daftarKode[i]] << endl;
//         cout << "Harga Satuan : " << hargaBarang[daftarKode[i]] << endl;
//         cout << "Harga subtotal : " << subtotalHarga[i] << endl;
//         cout << "Harga Total : " << totalHarga[i] << endl;
//         system("pause");
//     }
// }

// void tambahPesanan() {
//     int barang, kode, jumlah, total;

//     system("cls");
//     cout << "Silahkan Memilih Pesanan" << endl;
//     cout << "Nama : ";
//     cin >> namaCustomer[jumlahPesanan];
//     do {
//         cout << "Masukkan kode barang : ";
//         cin >> barang;
//         kode = cekKode(barang);
//         if (kode == -1) {
//             cout << "\nKode barang tidak ditemukan" << endl;
//         }
//     } while (kode == -1);
//     daftarKode[jumlahPesanan] = kode;
//     cout << "Masukkan Jumlah Barang : ";
//     cin >> jumlah;
//     subtotalHarga[jumlahPesanan] = hargaBarang[kode] * jumlah;
//     total = subtotalHarga[jumlahPesanan] * 0.1;
//     totalHarga[jumlahPesanan] = total + subtotalHarga[jumlahPesanan];

//     cout << "\n\nNama Barang : " << jenisBarang[kode] << endl;
//     cout << "Harga Satuan : " << hargaBarang[kode] << endl;
//     cout << "Harga Subtotal : " << subtotalHarga[jumlahPesanan] << endl;
//     cout << "Harga total : " << totalHarga[jumlahPesanan] << endl;
//     system("pause");
//     jumlahPesanan++;
//     menuUtama();
// }

// void menuUtama() {
//     int pilih;
//     do {
//         system("cls");
//         cout << "Menu Utama\n";
//         cout << "[1] Tambah Pesanan" << endl;
//         cout << "[2] Lihat Daftar Pesanan" << endl;
//         cout << "[3] Keluar" << endl;
//         cout << "Menu > ";
//         cin >> pilih;

//         switch (pilih) {
//             case 1:
//                 tambahPesanan();
//                 break;
//             case 2:
//                 lihatPesanan();
//                 break;
//             case 3:
//                 keluar = true;
//                 break;
//         }
//     } while (pilih != 3);
// }

// void login() {
//     string username, password;
//     system("cls");
//     cout << "Selamat Datang! Silahkan Login" << endl;

//     do {
//         cout << "Username : ";
//         cin >> username;
//         cout << "Password : ";
//         cin >> password;

//         if (!cekLogin(username, password)) {
//             percobaan--;
//             cout << "Kesempatan anda tersisa " << percobaan << " kali lagi" << endl;
//         }
//         if (cekLogin(username, password)) menuUtama();
//     } while (!cekLogin(username, password) && percobaan > 0);
//     if (percobaan == 0)
//         keluar = true;
// }

// void menu() {
//     int pilih;

//     do {
//         system("cls");
//         cout << "Selamat Datang! Silahkan Pilih" << endl;
//         cout << "[1] Login" << endl;
//         cout << "[2] Daftar" << endl;
//         cout << "[3] Keluar" << endl;
//         cout << "Menu > ";
//         cin >> pilih;

//         switch (pilih) {
//             case 1:
//                 login();
//                 break;
//             case 2:
//                 daftar();
//                 break;
//             case 3:
//                 keluar = true;
//                 break;
//             default:
//                 cout << "Menu yang anda pilih tidak ada!\n";
//                 system("pause");
//                 break;
//         }

//     } while (!keluar);
// }

// int main() {
//     menu();
// }

#include <iostream>
#include <string>
using namespace std;

const int MAX_USERS = 100;
const int MAX_ITEMS = 11;
const int MAX_ORDERS = 100;

string users[MAX_USERS][3]; // Array 2D untuk menyimpan Nama, Username, dan Password
string items[MAX_ITEMS] = {"1001", "1002", "1003", "1004", "1005", "1006", "1007", "1008", "1009", "1010", "1011"};
string itemNames[MAX_ITEMS] = {"Ayam Goreng", "Lotek", "Gado-gado", "Wagyu A5", "Gurame Bakar", 
                                "Bebek Peking", "Telur Triceratops", "Daging Zombie", 
                                "Magelangan Mba Lis", "Babi Guling", "Unagi"};
float itemPrices[MAX_ITEMS] = {18750, 12190, 10680, 767250, 45328, 
                                31313, 56570, 123456, 12100, 27894, 60456};
string orders[MAX_ORDERS];   // Array untuk menyimpan daftar pesanan
int user_count = 0;
int order_count = 0;

void registerUser ();
bool loginUser ();
void mainMenu();
void addOrder();
void viewOrders();
void calculateAndDisplayOrder(float price, int quantity);

int main() {
    int choice;

    while (true) {
        system("cls");
        cout << "Selamat Datang di Program!" << endl;
        cout << "[1] Login" << endl;
        cout << "[2] Register" << endl;
        cout << "[3] Exit" << endl;
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (loginUser ()) {
                    mainMenu(); // Jika login berhasil, arahkan ke menu utama
                } else {
                    cout << "Terlalu banyak percobaan. Program akan berhenti." << endl;
                    return 0; // Keluar dari program
                }
                break;
            case 2:
                registerUser ();
                break;
            case 3:
                return 0; // Keluar dari program
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                system("pause");
        }
    }
}

void registerUser () {
    system("cls");
    if (user_count >= MAX_USERS) {
        cout << "Jumlah pengguna maksimum telah tercapai." << endl;
        system("pause");
        return;
    }

    string name, username, password;

    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, name);
    cout << "Masukkan Username: ";
    getline(cin, username);
    cout << "Masukkan Password: ";
    getline(cin, password);

    // Simpan data pengguna di array
    users[user_count][0] = name;      // Nama
    users[user_count][1] = username;   // Username
    users[user_count][2] = password;   // Password
    user_count++;

    cout << "Pendaftaran berhasil!" << endl;
    system("pause");
}

bool loginUser () {
    system("cls");
    string username, password;

    int attempts = 0;
    while (attempts < 3) {
        cout << "Masukkan Username: ";
        cin.ignore();
        getline(cin, username);
        cout << "Masukkan Password: ";
        getline(cin, password);

        // Cek kredensial
        for (int i = 0; i < user_count; i++) {
            if (users[i][1] == username && users[i][2] == password) {
                cout << "Login berhasil! Selamat datang, " << users[i][0] << "!" << endl;
                system("pause");
                return true; // Login berhasil
            }
        }

        attempts++;
        cout << "Username atau Password salah. Coba lagi." << endl;
        cout << "Percobaan ke: " << attempts << " dari 3." << endl;
        system("pause");
    }

    return false; // Login gagal setelah 3 percobaan
}

void mainMenu() {
    int choice;

    while (true) {
        system("cls");
        cout << "Menu Utama" << endl;
        cout << "[1] Tambah Pesanan" << endl;
        cout << "[2] Lihat Daftar Pesanan" << endl;
                cout << "[3] Keluar" << endl;
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addOrder();
                break;
            case 2:
                viewOrders();
                break;
            case 3:
                return; // Kembali ke menu login
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                system("pause");
        }
    }
}

void addOrder() {
    system("cls");
    if (order_count >= MAX_ORDERS) {
        cout << "Jumlah pesanan maksimum telah tercapai." << endl;
        system("pause");
        return;
    }

    string customerName;
    string itemCode;
    int quantity;
    char continueAdding;

    cout << "Masukkan Nama Customer: ";
    cin.ignore();
    getline(cin, customerName);

    do {
        cout << "Masukkan Kode Barang (1001 - 1011): ";
        getline(cin, itemCode);

        // Cek apakah kode barang valid
        int itemIndex = -1;
        for (int i = 0; i < MAX_ITEMS; i++) {
            if (items[i] == itemCode) {
                itemIndex = i;
                break;
            }
        }

        if (itemIndex != -1) {
            cout << "Masukkan Jumlah: ";
            cin >> quantity;

            // Hitung dan tampilkan harga
            calculateAndDisplayOrder(itemPrices[itemIndex], quantity);

            // Tanyakan apakah ingin melanjutkan
            cout << "Apakah Anda ingin menambah barang lagi? (y/n): ";
            cin >> continueAdding;
            cin.ignore(); // membersihkan newline dari buffer
        } else {
            cout << "Kode barang tidak valid. Silakan coba lagi." << endl;
            system("pause");
        }
    } while (continueAdding == 'y' || continueAdding == 'Y');

    // Simpan pesanan
    orders[order_count] = "Customer: " + customerName; // Simpan nama customer
    order_count++;
}

void calculateAndDisplayOrder(float price, int quantity) {
    float subtotal = price * quantity;
    float tax = subtotal * 0.1; // Pajak 10%
    float total = subtotal + tax;

    cout << "Harga Satuan: Rp " << price << endl;
    cout << "Harga Subtotal: Rp " << subtotal << endl;
    cout << "Harga Total (termasuk pajak 10%): Rp " << total << endl;
    system("pause");
}

void viewOrders() {
    system("cls");
    if (order_count == 0) {
        cout << "Tidak ada pesanan yang tersedia." << endl;
    } else {
        cout << "Daftar Pesanan:" << endl;
        for (int i = 0; i < order_count; i++) {
            cout << orders[i] << endl;
        }
    }
    system("pause");
}