#include <iostream>
using namespace std;
main(){
    int nim, sks, sks_mka, sks_d, sks_e, lama;
    string nama;
    float ipk;

    cout << "Masukkan Nama Anda                 : "; getline(cin,nama);
    cout << "Masukkan NIM Anda                  : "; cin >> nim; 
    cout << "Masukkan Jumlah SKS Anda           : "; cin >> sks; 
    cout << "Masukkan IPK Anda                  : "; cin >> ipk; 
    cout << "Masukkan Jumlah SKS MKA Pilihan    : "; cin >> sks_mka; 
    cout << "Masukkan Jumlah SKS Nilai D        : "; cin >> sks_d; 
    cout << "Masukkan Jumlah SKS Nilai E        : "; cin >> sks_e; 
    cout << "Masukkan Lama Lulus Anda           : "; cin >> lama; 

    if (ipk > 2.25 && sks >= 144 && sks_mka >= 15 && sks_d < sks/4 && sks_e == 0) {
        cout << "\nAnda Dinyatakan Lulus\n";
        if (ipk >= 3.51 && lama <= 8){
            cout << "\nAnda Dinyatakan Lulus Dengan Pujian (Cumlaude)\n" ;
        } else
        if (ipk >= 3.01 && ipk <= 3.50 || ipk >= 3.51 && lama > 8){
            cout << "\nAnda Dinyatakan Lulus Dengan Sangat Memuaskan (Very Satisfactory)\n" ;
        } else
        if (ipk >= 2.76 && ipk <= 3.00){
            cout << "\nAnda Dinyatakan Lulus Dengan Memuaskan (Satisfactory)\n" ;
        } else
        if (ipk >= 3.51 && lama <= 8){
                cout << "\nDiusulkan Mendapatkan Karya Cendekia\n" ;
        }
    }
        else{ 
            cout << "\nAnda Dinyatakan Belum LULUS\n";
        }
    
    system("pause");

}