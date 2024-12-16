#include <iostream>
using namespace std;


int main (){

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
                break; //swotch A

            default:
                cout << "mawu kembali ke umum tekan 'N' " << endl;
                cout << "jika tidak mau tekan 'X' " << endl;
                cout << "masukkan ";
                    cin >> ulang1;
                break; //switch gudang
            }

        system ("cls");
    } while (ulang1 == 'N');
        cout << "anda akan keluar dari program" << endl;
        system ("pause");
    }