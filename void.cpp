#include<iostream>
using namespace std;

// void info();

// int main(){
//     info();
// }

// void info(){
//     int i = 0;
//     for (i=0;i<5;i++)
//     {
//         cout << i << endl;
//     }
// }

#include <iostream>
using namespace std;

void tampil(int &x)
{
    x += 5;
    cout << x << '\n';
}

int main()
{
    int nilai = 5;
    cout << "nilai awal: " << nilai << '\n';
    tampil(nilai);
    cout << "nilai setelah pemanggilan tampil: " << nilai;
}
