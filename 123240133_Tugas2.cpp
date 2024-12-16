#include <iostream>
using namespace std;

int main()
{
    string jabatan;
    int taun;
    int bonus;

    cout << "Berikut Jabatan Yang Dapat Dipilih : " << endl;
    cout << "- Karyawan" << endl;
    cout << "- Manajer" << endl;
    cout << "- CEO" << endl << endl;

    cout << "Masukkan Jabatan Anda (Karyawan, Manajer, CEO): ";
        cin >> jabatan;
    
    if (jabatan == "Karyawan", "karyawan"){
        cout << "Masukkan Lama Tahun Kerja: ";
            cin >> taun;
                if(taun < 3){
                    bonus = taun * 100000;
                        cout << "Bonus Anda Adalah: " << bonus << endl;
                }else if(taun >= 3 && taun <= 7){
                    bonus = taun * 125000;
                        cout << "Bonus Anda Adalah: " << bonus << endl;
                }else if(taun >= 7){
                    bonus = taun * 150000;
                        cout << "Bonus Anda Adalah: " << bonus << endl;
                            }else{
                                cout << "Angka Tidak Valid!";
                            }
    }else if(jabatan == "Manajer"){
        cout << "Masukkan Lama Tahun Kerja: ";
            cin >> taun;
                if(taun < 3){
                    bonus = taun * 300000;
                        cout << "Bonus Anda Adalah: " << bonus << endl;
                }else if(taun >= 3 && taun <= 7){
                    bonus = taun * 325000;
                        cout << "Bonus Anda Adalah: " << bonus << endl;
                }else if(taun >= 7){
                    bonus = taun * 350000;
                        cout << "Bonus Anda Adalah: " << bonus << endl;
                            }else{
                                cout << "Angka Tidak Valid!";
                            }
    }else if(jabatan == "CEO", "ceo"){
        cout << "Masukkan Lama Tahun Kerja: ";
            cin >> taun;
                if(taun < 3){
                    bonus = taun * 500000;
                        cout << "Bonus Anda Adalah: " << bonus << endl;
                }else if(taun >= 3 && taun <= 7){
                    bonus = taun * 525000;
                        cout << "Bonus Anda Adalah: " << bonus << endl;
                }else if(taun >= 7){
                    bonus = taun * 550000;
                        cout << "Bonus Anda Adalah: " << bonus << endl;
                            }else{
                                cout << "Angka Tidak Valid!";
                            }
    }else{
        cout << "Jabatan tidak ditemukan, keluar dari program";
    }

}