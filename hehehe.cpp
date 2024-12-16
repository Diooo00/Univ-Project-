#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 3;
    int matrix[a][b];

    for(int i=0 ; i<a ; i++)
    {
        for(int j=0 ; j<b ; j++){
        cin >> matrix[i][j];
        }
        cout << endl;
    }
    
    for(int i=0 ; i<a ; i++)
    {
        for(int j=b-1 ; j>=0 ; j--){
        cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}
