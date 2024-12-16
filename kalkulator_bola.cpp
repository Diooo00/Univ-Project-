#include <iostream>
#define phi 3.14
using namespace std;
main()
{         
        int r;
        float Lp;
        float volume;
        cout << "jari jari = ";
        cin>> r;
        cout <<""<<endl;
        Lp= 4*phi*r*r;
        volume = 4/3*phi*r*r*r;
        cout << "Luas Permukaan ="<<Lp<<endl;
        cout << "volume         ="<<volume<<endl;
        cout << ""<<endl;
        system("pause");
        
}