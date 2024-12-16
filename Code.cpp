#include<iostream>
using namespace std;

main(){
    int mangga;
    int bl_mangga;
    int orang_1, orang_2, orang_3;
    int sisa_mangga;

    cout << "Mangga yang dibeli(kg): ";
    cin >> bl_mangga;
    cout << "Jumlah anggota yang beranggotakan" << endl;
    cout << "1 orang = ";
    cin >> orang_1;
    cout << "2 orang = ";
    cin >> orang_2;
    cout << "3 orang = ";
    cin >> orang_3;


    sisa_mangga = (bl_mangga * 2) - ((orang_1 * 1)+(orang_2 * 2)+(orang_3 * 3));
    if(sisa_mangga < 0)
    cout << "FAQIH TOLOL!!!!";
    else
        cout << "Sisa mangga = " << sisa_mangga;
}