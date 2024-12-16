#include<iostream>
#include<iomanip>
using namespace std;
main(){

//deret fibonaci    
int deret;
int n;
int n_1 = 1;
int n_2 = 0;
cout << "jumlah deret fibonaci : "; cin >> deret;
for(int i=1;i<deret;i++){ //blok pertama deklarasi variabel, blok kedua kondisi perulangan, blok ketiga increment atau decrement
    n = n_1 + n_2;
    cout << n << " ";
    n_2 = n_1;
    n_1 = n;
}

//increment & decrement
//v++ //nambah 1 tiap tahap
//v+=n //nambah sejumlah n tiap tahap perulangan

//char ulang= 'y';
//while(ulang == 'y' || ulang == 'Y'){ //kondisi dalam while adalah syarat pengulangan berlanjut
//cout << "berhasil" << endl;
//cout << "ulangi?";
//cin >> ulang;
//}

//char ulang;
//do{
//    cout << "berhasil\n";
//    cout << "ulangi?";
//    cin >> ulang;
//}while(ulang == 'y' || ulang == 'Y');





}