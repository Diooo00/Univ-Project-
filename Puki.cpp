#include <iostream>
using namespace std;
int main () {
int A;
int B;
int C;
cout<<"masukkan nilai A : ";cin>>A;endl;
cout<<"masukkan nilai B : ";cin>>B;endl;
cout<<"masukkan nilai C : ";cin>>C;endl;
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