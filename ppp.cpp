#include<iostream>
using namespace std;
main()

{
    int bil;
    cin >> bil;
    if (bil==1){
        cout<<"satu\n";
    }
    else 
    if(bil==2){
        cout<<"dua\n";
    }
    else if(bil==3){
        cout<<"tiga\n";
    }
    else if(bil==4){
        cout<"empat\n";
    }
    else{
        cout<<"perintah tidak valid\n";
    }
    system("pause");
}