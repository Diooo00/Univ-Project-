#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

main()
{
//isotream
cin<<"nama anda : "<<cin.getline(nama, sizeof(nama)) //kalau pakai char
cin<<"nama anda : "<<getline(cin, nama) //kalau pakai string
//iomanip
setprecision() //untuk menentukan jumlah presisi huruf atau angka output
setw() //untuk menentukan jumlah slot setelah ekspresi
setiosflags(ios::left/right) //untuk input kiri atau kanan
setfill() //untuk mengisi jarak spasi, contoh ('-') sehingga spasi diisi dengan -

//stdio.h
printf("") // cout langsungan dalam kurung, contoh printf("nilai %dx = " ,x ) %d untuk pengganti variabel dalam kurung
//tambahkan konstanta diantara % dan d untuk menambahkan fungsi setw
scanf("%d",x) //cin untuk stdio.h



}
