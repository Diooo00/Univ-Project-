#include <iostream>
using namespace std;

int main () {
   float angka1;
   float angka2;
   float hasil = 0;
   int pilih_menu;
   cout << "--------------------" << endl;
   cout << "Kalkulator sederhana" << endl;
   cout << "--------------------" << endl;
   cout << endl;
   cout << "Masukkan angka pertama : "; cin >> angka1;
   cout << "Masukkan angka kedua : ";   cin >> angka2;
   cout << endl;
   cout << "- MENU KALKULATOR SEDERHANA -" << endl;
   cout << "       - 2 BILANGAN -        " << endl; 
   cout << " 1. Program Perkalian " << endl;
   cout << " 2. Program Pembagian " << endl;
   cout << " 3. Program Pertambahan " << endl;
   cout << " 4. Program Pengurangan " << endl;
	
   cout<<"Pilih menu : "; cin >> pilih_menu;	
	if ( pilih_menu == 1 ) {
		hasil = angka1 * angka2;
		cout << "Hasil perkalian " << angka1 << " * " << angka2 
                 << " = "    << hasil << endl;
	}
	else if ( pilih_menu == 2 ) {
		hasil = angka1 / angka2;
		cout << "Hasil pembagian " << angka1 << " / " << angka2 
                 << " = " << hasil << endl;
	}
	else if ( pilih_menu == 3 ) {
		hasil = angka1 + angka2;
		cout << "Hasil penjumlahan " << angka1 << " + " << angka2 
                 << " = " << hasil << endl;
	}
	else if ( pilih_menu == 4 ) {
		hasil = angka1 - angka2;
		cout << "Hasil pengurangan " << angka1 << " - " << angka2 
                 << " = " << hasil << endl;
	}
	else {
		cout << "Maaf menu tidak tersedia, silahkan pilih menu 1-4" << endl;
	}	
}
