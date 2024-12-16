#include <iostream>
#include <iomanip>
using namespace std;

main () 
{
   int lama;
   int jabatan; 
   cout << "+=====================+" << endl;
   cout << setiosflags(ios::left) << setw(5) << "|" << "BONUS PEGAWAI";
   cout << setiosflags(ios::right) << setw(5) <<"|" << endl;
   cout << "+=====================+" << endl;
   cout << endl;
   cout << "Silahkan Pilih Jabatan Anda : ";
   cout << "\n----------------------------";
   cout << "\n1. CEO" << setiosflags(ios::right) << setw(22) << "|";
   cout << "\n2. Manajer" << setiosflags(ios::right) << setw(18) << "|";
   cout << "\n3. Karyawan" << setiosflags(ios::right) << setw(17) << "|";
   cout << "\n----------------------------";
   cout << endl;
   cout << "____________________________";
   cout << "\nMasukkan Jabatan Anda : "; cin >> jabatan;
   cout << endl;
	
   switch (jabatan)
   {
    case 1:
        cout << "Jabatan Anda Adalah CEO\n";
        cout << "Masukkan Lama Tahun Kerja Anda : "; cin >> lama; 
        cout << "Anda Telah Bekerja Pada Perusahaan Selama " << lama << " Tahun\n";
        if (lama <3)
        {
          cout << "\nBonus Anda Adalah : Rp " << 500000*lama <<",00\n" << "\nTerimakasih Banyak Atas Kerja Keras Anda";
        }
        else if (lama >=7)
        {
          cout << "\nBonus Anda Adalah : Rp " << 550000*lama <<",00\n" << "\nTerimakasih Banyak Atas Kerja Keras Anda";
        }
        else if (3<= lama <7)
        {
          cout << "\nBonus Anda Adalah : Rp " << 525000*lama <<",00\n" << "\nTerimakasih Banyak Atas Kerja Keras Anda";
        }
        cout << "\n\n";
        system("pause");
    break;    
    case 2:
        cout << "Jabatan Anda Adalah Manajer\n";
        cout << "Masukkan Lama Tahun Kerja Anda : "; cin >> lama; 
        cout << "Anda Telah Bekerja Pada Perusahaan Selama " << lama << " Tahun\n";
        if (lama <3)
        {
          cout << "\nBonus Anda Adalah : Rp " << 300000*lama <<",00\n" << "\nTerimakasih Banyak Atas Kerja Keras Anda";
        }
        else if (lama >=7)
        {
          cout << "\nBonus Anda Adalah : Rp " << 350000*lama <<",00\n" << "\nTerimakasih Banyak Atas Kerja Keras Anda";
        }
        else if (3<= lama <7)
        {
          cout << "\nBonus Anda Adalah : Rp " << 325000*lama <<",00\n" << "\nTerimakasih Banyak Atas Kerja Keras Anda";
        }
        cout << "\n\n";
        system("pause");
    break; 
    case 3:
        cout << "Jabatan Anda Adalah Karyawan\n";
        cout << "Masukkan Lama Tahun Kerja Anda : "; cin >> lama; 
        cout << "Anda Telah Bekerja Pada Perusahaan Selama " << lama << " Tahun\n";
        if (lama <3)
        {
          cout << "\nBonus Anda Adalah : Rp " << 100000*lama <<",00\n" << "\nTerimakasih Banyak Atas Kerja Keras Anda";
        }
        else if (lama >=7)
        {
          cout << "\nBonus Anda Adalah : Rp " << 150000*lama <<",00\n" << "\nTerimakasih Banyak Atas Kerja Keras Anda";
        }
        else if (3<= lama <7)
        {
          cout << "\nBonus Anda Adalah : Rp " << 125000*lama <<",00\n" << "\nTerimakasih Banyak Atas Kerja Keras Anda";
        }
        cout << "\n\n";
        system("pause");
    break;  
    default:
        cout << "Jabatan yang Anda Pilih Tidak Valid\nHarap Ulangi Pengisian Data\n\n";
        system("pause");
    break;         
   }
}