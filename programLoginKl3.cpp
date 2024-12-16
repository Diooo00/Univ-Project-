#include <iostream>
#include <iomanip>
using namespace std;

void menu();
int gudang();

int main ()
{
    string uname;
    string pass;
    int log = 0;
    int pilihan, pesanan,jumlah;
    int pesanan2, jumlah2;
    int pesanan3, jumlah3;
    char benar;
    char ulang1;


        cout << "+========================+" << endl;
        cout << setw(24) << "|  FUFU FAFA RESTAURANT  |" << endl;
        cout << "+========================+" << endl;

    while (log < 5)
    {  
        cout << "Enter your username    : ";
        getline(cin,uname);
        cout << "Enter your password    : ";
        cin >> pass;cin.ignore();

        if ((uname == "Satya Dio Putranto" && pass == "123240121") ||
            (uname == "Dimas Rizki Ardiansyah" && pass == "123240123") ||
            (uname == "Hizkia Damai Sejati" && pass == "123240132") ||
            (uname == "Zaky Mubarok Aljauhari" && pass == "123240107") ||
            (uname == "Lintang Purnama Surya Aji" && pass == "123240131")) {
            cout << "\nHello " << uname << "\nHave a great day!\n";
            return true;

        } else {
            log++;
            cout << "Invalid login attempt. Please try again." << endl;
    }
    if (log == 5){
            cout << "Too many login attempts! The program will now terminate." << endl;
            return 0;
    }
    } system("pause");
    }
