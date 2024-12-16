#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    string nim,nama,plug;

    cout << "Input Data" << endl ;
    cout << "NIM    : ";
    getline(cin,nim);
    cout << "Nama   : ";
    getline(cin,nama);
    cout << "Plug   : ";
    getline(cin,plug);

    cout<<""<<endl;

    cout<<"Inilah data anda"<<endl;
    cout<<"NIM      : "<<nim<<endl;
    cout<<"Nama     : "<<nama<<endl;
    cout<<"Plug     : "<<plug;

    cout<<""<<endl;

    cout<<"Dalam bentuk tabel"<<endl;
    cout << "=================================================" << endl;
    cout <<setw(12)<<setiosflags(ios::left)<< "NIM" ;
    cout <<setw(20)<<setiosflags(ios::left)<< "|Nama" ;
    cout <<setw(16)<<setiosflags(ios::left)<< "|Plug" <<"|"<< endl;
    cout << "=================================================" << endl;
    cout <<setw(12)<<setiosflags(ios::left)<< nim<<"|"; 
    cout <<setw(19)<<setiosflags(ios::left)<< nama<<"|";
    cout <<setw(15)<<setiosflags(ios::left)<< plug <<"|"<< endl;
    cout << "=================================================" << endl;
    system("pause");

}