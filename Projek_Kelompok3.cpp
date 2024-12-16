#include <iostream>
#include <iomanip>
using namespace std;

int menu(); //display menu
int gudang(); //fungsi cek stok
int stok(); //fungsi pengurangan stok setelah order
int harga(int a, int &b); //fungsi penyimpanan harga menu
int nama(int a); //fungsi penyimpanan nama pesanan
int nota(int &a, int b, int c, int d, int e, int f); //fungsi penampungan order


int main ()
{
    string uname;
    string pass;
    
    int log = 0, chance = 1;
    int pilihan;
    char tambah1,tambah2,tambah3,tambah4,tambah5;
    int pesanan1,pesanan2,pesanan3,pesanan4,pesanan5,pesanan6;
    int jumlah1,jumlah2,jumlah3,jumlah4,jumlah5,jumlah6;
    char ulang1,ulang2,ulang3;

        system("cls");
        cout << "+=========================+" << endl;
        cout << "|" << setw(24) << "CHICKEN & CO RESTAURANT" << setw(2) << "|" << endl;
        cout << "+=========================+" << endl;

    while (log < 5)
    {  
        cout << "Please Log In\n\n";
        cout << "Enter your username    : ";
        getline(cin,uname);
        cout << "Enter your password    : ";
        cin >> pass;cin.ignore();


        if ((uname == "Satya Dio Putranto" && pass == "123240121") ||
            (uname == "Dimas Rizki Ardiansyah" && pass == "123240123") ||
            (uname == "Hizkia Damai Sejati" && pass == "123240132") ||
            (uname == "Zaky Mubarok Aljauhari" && pass == "123240107") ||
            (uname == "Lintang Purnama Surya Aji" && pass == "123240131")) {
            cout << "\nHello " << uname << "\nHave a great day!\n";
            break;
        }
        else if(uname == "Lintang Purnama Surya Aji" && pass == "123240131"){
            cout << "\nHello " << uname << "\nHave a great day!\n";
            break;
        }
        else{
            system("cls");
            cout << "+=========================+" << endl;
            cout << "|" << setw(24) << "CHICKEN & CO RESTAURANT" << setw(2) << "|" << endl;
            cout << "+=========================+" << endl;
            cout << "Invalid login attempt. Please try again." << endl;
            log++;
        }
    }
    if (log == 5){
            cout << "Too many login attempts! The program will now terminate." << endl;
            return 0;
    }
    system("pause");

    do{
    system("cls");

    cout << "1. Input order\n2. Check stock\n3. Exit\n\n"; 
    cout << "What you want to do?\n"; cin >> pilihan;
    system("cls");

    switch (pilihan)
    {
    case 1:
        system("cls");
        menu();
        cout << "Input order number : "; cin >> pesanan1; pesanan1--;
        cout << "Nama Item          : ";
        nama(pesanan1);
        cout << "Jumlah item        : "; cin >> jumlah1;
        cout << "Harga item         : ";
        harga(pesanan1, jumlah1);
        cout << "apakah anda mau menambahkan pesanan?" << endl;
        cout << "Y/N" << endl; cin >> tambah1;
            if(tambah1 == 'Y'){
                menu();
                cout << "Input order number : "; cin >> pesanan2; pesanan2--;
                cout << "Nama Item          : ";
                nama(pesanan2);
                cout << "Jumlah item        : "; cin >> jumlah2;
                cout << "Harga item         : ";
                harga(pesanan2, jumlah2);
                cout << "apakah anda mau menambahkan pesanan?" << endl;
                cout << "Y/N" << endl; cin >> tambah2;
            }
                if(tambah2 == 'Y'){
                    menu();
                    cout << "Input order number : "; cin >> pesanan3; pesanan3--;
                    cout << "Nama Item          : ";
                    nama(pesanan3);
                    cout << "Jumlah item        : "; cin >> jumlah3;
                    cout << "Harga item         : ";
                    harga(pesanan3, jumlah3);
                    cout << "apakah anda mau menambahkan pesanan?" << endl;
                    cout << "Y/N" << endl; cin >> tambah3;
                }
                    if(tambah3 == 'Y'){
                        menu();
                        cout << "Input order number : "; cin >> pesanan4; pesanan4--;
                        cout << "Nama Item          : ";
                        nama(pesanan4);
                        cout << "Jumlah item        : "; cin >> jumlah4;
                        cout << "Harga item         : ";
                        harga(pesanan4, jumlah4);
                        cout << "apakah anda mau menambahkan pesanan?" << endl;
                        cout << "Y/N" << endl; cin >> tambah4;
                    }
                            if(tambah4 == 'Y'){
                                menu();
                                cout << "Input order number : "; cin >> pesanan5; pesanan5--;
                                cout << "Nama Item          : ";
                                nama(pesanan3);
                                cout << "Jumlah item        : "; cin >> jumlah5;
                                cout << "Harga item         : ";
                                harga(pesanan5, jumlah5);
                                cout << "apakah anda mau menambahkan pesanan?" << endl;
                                cout << "Y/N" << endl; cin >> tambah5;
                            }
                                if(tambah5 == 'Y'){
                                    menu();
                                    cout << "Input order number : "; cin >> pesanan6; pesanan6--;
                                    cout << "Nama Item          : ";
                                    nama(pesanan6);
                                    cout << "Jumlah item        : "; cin >> jumlah6;
                                    cout << "Harga item         : ";
                                    harga(pesanan6, jumlah6);
                                    nota(jumlah1,jumlah2,jumlah3,jumlah4,jumlah5,jumlah6);
                                    cout << jumlah1;
                                    cin >> ulang1;
                                    system("pause");
                                }
                            else if(tambah5 == 'N'){
                                nota(jumlah1,jumlah2,jumlah3,jumlah4,jumlah5,jumlah6=0);
                                cout << jumlah1;
                                cin >> ulang1;
                                system("pause");
                            }
                        else if(tambah4 == 'N'){
                            nota(jumlah1,jumlah2,jumlah3,jumlah4,jumlah5=0,jumlah6=0);
                            cout << jumlah1;
                            cin >> ulang1;
                            system("pause");
                        }
                    else if(tambah3 == 'N'){
                        nota(jumlah1,jumlah2,jumlah3,jumlah4=0,jumlah5=0,jumlah6=0);
                        cout << jumlah1;
                        cin >> ulang1;
                        system("pause");
                    }
            else if(tambah2 == 'N'){
                nota(jumlah1,jumlah2,jumlah3=0,jumlah4=0,jumlah5=0,jumlah6=0);
                cout << jumlah1;
                cin >> ulang1;
                system("pause");
            }
        else if(tambah1 == 'N'){
            nota(jumlah1,jumlah2=0,jumlah3=0,jumlah4=0,jumlah5=0,jumlah6=0);
            cout << jumlah1;
            cin >> ulang1;
            system("pause");

        }
        break;

    case 2:
        gudang();
        cout << "apakah anda mau kembali ?" << endl;
        cout << "Y/N" << endl;
        cin >> ulang1;
        break;
        
    case 3:
        cout << "Are you sure?\n(Y/N)\n"; cin >> ulang1;

    default:
        
        break;
    } 
    }while (ulang1 == 'N');
}
    
int menu(){

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

    }

int gudang (){

    char pilih;
    int umum;
    int code;
    char ulang1;

    do {
    cout << "Selamat datang di gudang" << endl;
    cout << "pilih A atau B" << endl;
    cout << "A = Cari Bahan" << endl;
    cout << "B = Lihat Umum" << endl;
    cout << "C = Keluar" << endl;
    cout << "masukkan pilihan ";
        cin >> pilih;
    cout << endl;
            switch (pilih)
            {
            case 'A':
                system ("cls");
                do {
                cout << "mawu cari apa ? " << endl;
                cout << "daftar barang dan code" << endl;
                cout << "masukkan code ";
                    cin >> code;
                        switch (code) {
                        case 1:
                            system ("cls");
                            cout << "dada" << endl;
                            cout << "jumlah awal = " << endl;
                            cout << "sisa barang = " << endl;
                            cout << endl;
                            cout << "mawu cari lagi ? " << endl;
                            cout << "Y/N" << endl;
                            cout << "masukkan ";
                                cin >> ulang1;
                            break;

                        case 2:
                            system ("cls");
                            cout << "sayap" << endl;
                            cout << "jumlah awal = " << endl;
                            cout << "sisa barang = " << endl;
                            cout << endl;
                            cout << "mawu cari lagi ? " << endl;
                            cout << "Y/N" << endl;
                            cout << "masukkan ";
                                cin >> ulang1;
                            break;

                        case 3:
                            system ("cls");
                            cout << "paha" << endl;
                            cout << "jumlah awal = " << endl;
                            cout << "sisa barang = " << endl;
                            cout << endl;
                            cout << "mawu cari lagi ? " << endl;
                            cout << "Y/N" << endl;
                            cout << "masukkan ";
                                cin >> ulang1;
                            break;
        
                        default:
                            cout << endl;
                            cout << "code barang tidak ada" << endl;
                            cout << "apakah anda ingin kembali ke gudang ? " << endl;
                            cout << "jika iya tekan 'N' " << endl;
                            cout << "jika tidak tekan 'X' " << endl;
                            cout << "masukkan ";
                                cin >> ulang1;
                            break; //switch dalem A
                        }
                    system ("cls");

                } while (ulang1 == 'Y');

                cout << "anda akan kembali ke gudang" << endl;
                system ("pause");
                break; //switch A
                
            case 'B':
            system ("cls");
            do {
                cout << "anda masuk ke umum" << endl;
                cout << "silahkan pilih" << endl;
                cout << "1. tampil swmua" << endl;
                cout << "2. barang yang masih" << endl;
                cout << "3. barang habis" << endl;
                cout << "masukkan pilihan = ";
                    cin >> umum;
                    switch (umum) {
                    case 1:
                        system ("cls");
                        cout << "tampilan tabel smua barang" << endl;
                        cout << endl;
                        cout << "mawu kembali ke umum ? " << endl;
                        cout << "Y/N" << endl;
                        cout << "masukkan ";
                            cin >> ulang1;
                        break;

                    case 2:
                        system ("cls");
                        cout << "tampilan smwa barang tersisa" << endl;
                        cout << endl;
                        cout << "mawu kembali ke umum ? " << endl;
                        cout << "Y/N" << endl;
                        cout << "masukkan ";
                            cin >> ulang1;
                        break;

                    case 3:
                        system ("cls");
                        cout << "tampilan smwa barang habis" << endl;
                        cout << endl;
                        cout << "mawu kembali ke umum ? " << endl;
                        cout << "Y/N" << endl;
                        cout << "masukkan ";
                            cin >> ulang1;
                        break;
                    
                    default:
                        cout << endl;
                        cout << "code tidak ada" << endl;
                        cout << "apakah anda ingin kembali ke gudang ? " << endl;
                        cout << "jika iya tekan 'N' " << endl;
                        cout << "jika tidak tekan 'X' " << endl;
                        cout << "masukkan ";
                            cin >> ulang1;
                        break; //switch dalem B
                    }
                system ("cls");

            } while (ulang1 == 'Y');

            cout << "anda akan kembali ke gudang" << endl;
            system ("pause");
                break; //switch A

            default:
                cout << "Tetap di menu gudang tekan 'N' " << endl;
                cout << "Keluar ke umum tekan  'Y' " << endl;
                cout << "masukkan ";
                    cin >> ulang1;
                break; //switch gudang
            }

        system ("cls");
    } while (ulang1 == 'N');
    }

int stok(){

}

int nama(int a){
    string nama[6] = {"Ayam Potongan Besar","Ayam Potongan Kecil","Kentang Goreng","Burger","Pahe 1","Pahe 2"};
    cout << nama[a] << endl;
    return a;
}

int harga(int a, int &b){
    int harga[6] = {13000,11000,7000,15000,17000,15000};
    cout << harga[a]*b<< endl;
    b = harga[a]*b;
    return b;
}

int nota(int &a, int b, int c, int d, int e, int f){
    int sum = a+b+c+d+e+f;
    a = sum;
    return a;
}