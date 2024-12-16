#include <iostream>
using namespace std;
main()
{
    int nim,sks,sks_mka,sksd,skse,lama;
    string nama;
    float ipk;

    cout << "Harap Masukkan NIM Anda                        : "; cin >> nim; cin.ignore();
    cout << "Harap Masukkan Nama Anda                       : "; getline(cin,nama);
    cout << "Harap Masukkan Jumlah SKS Anda                 : "; cin >> sks; cin.ignore();
    cout << "Harap Masukkan IPK Anda                        : "; cin >> ipk; cin.ignore();
    cout << "Harap Masukkan Jumlah SKS MKA Pilihan Anda     : "; cin >> sks_mka; cin.ignore();
    cout << "Harap Masukkan Jumlah SKS nilai D Anda         : "; cin >> sksd; cin.ignore();
    cout << "Harap Masukkan Jumlah SKS Nilai E Anda         : "; cin >> skse; cin.ignore();
    cout << "Harap Masukkan Semester Anda                   : "; cin >> lama; cin.ignore();

    if (ipk > 2.25 && sks >= 144 && sks_mka >= 15 && sksd < sks/4 && skse == 0){
        if(ipk>=3.51 && lama <= 8){
            cout << "\nAnda Dinyatakan LULUS Dengan Pujian (Cumlaude)";
        }
        else if (3.01 <= ipk <= 3.5 || ipk >= 3.51 && lama > 8){
            cout << "\nAnda Dinyatakan LULUS Dengan Sangat Memuaskan (Very Satisfactory)";
        }
        else if(2.76  <= ipk <= 3.00){
            cout << "\nAnda Dinyatakatan LULUS Dengan Memuaskan (Satisfactory)";
        }
        if (ipk >=3.51 && lama <= 8){
        cout << "\nDiusulkan Mendapatkan Karya Cendekia";
        }
    }
    else if (0 <ipk < 2.76){
        cout << "\nAnda dinyatakan LULUS";
        }
    else {
        cout << "\nMohon Maaf, Anda Belum Memenuhi Kriteria Kelulusan";
    }
    cout << "\n";
    system("pause");
}