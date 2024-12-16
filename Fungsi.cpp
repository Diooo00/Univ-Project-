#include <iostream>
using namespace std;

void OperasiPenjumlahan(int x, int y);
int PassByValue(int x, int y);
int PassByReference(int &x, int &y);
int PassByAddress(int *x, int *y);

int main(){
  int a;
  int b;
  int hasil;
  a = 5;
  b = 10;

  cout << "a : " << a << endl;
  cout << "b : " << b << endl;

  OperasiPenjumlahan(a,b);
  
  cout << endl;

  cout << "PassByValue" << endl << endl;
  cout << "a sebelum PassByValue : " << a << endl;
  cout << "b sebelum PassByValue : " << b << endl << endl;

  hasil = PassByValue(a,b);

  cout << "Hasil Setelah Proses : " << hasil << endl << endl;
  cout << "a setelah PassByValue : " << a << endl;
  cout << "b setelah PassByValue : " << b << endl << endl;


  cout << "PassByReference" << endl << endl;
  cout << "a sebelum PassByReference : " << a << endl;
  cout << "b sebelum PassByReference : " << b << endl << endl;

  hasil = PassByReference(a,b);

  cout << "Hasil Setelah Proses: " << hasil << endl << endl;
  cout << "a setelah PassByReference : " << a << endl;
  cout << "b setelah PassByReference : " << b << endl << endl;

  a = 5;
  b = 10;

  cout << "PassByAddress" << endl << endl;
  cout << "a sebelum PassByAddress : " << a << endl;
  cout << "b sebelum PassByAddress : " << b << endl << endl;

  hasil = PassByAddress(&a,&b);

  cout << "Hasil Setelah Proses: " << hasil << endl << endl;
  cout << "a setelah PassByAddress : " << a << endl;
  cout << "b setelah PassByAddress : " << b << endl;
}

void OperasiPenjumlahan(int x, int y){
  int jumlah = x+y;
  cout << "a + b : " << jumlah << endl;
}

int PassByValue(int x, int y){
  x = 7;
  y = 12;
  int jumlah = x+y;
  return jumlah;
}

int PassByReference(int &x, int &y){
  x = 10;
  y = 20;
  int jumlah = y/10;
  return jumlah;
}

int PassByAddress(int *x, int *y){
  *y = *x;
  *x = 20;
  int hasil = *x - *y;
  return hasil;
}