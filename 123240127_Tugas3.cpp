#include<iostream>
using namespace std;
main(){
    
    int row,spa,col;

    for(row=1;row<=5;row++){
        for(spa=1;spa<=5-row;spa++){
            cout<<" ";
        }for(col=1;col<=row*2-1;col++){
            cout<<"*";
        }cout<<endl;
    }for(row=4;row>=1;row--){
        for(spa=1;spa<=5-row;spa++){
            cout<<" ";
        }for(col=1;col<=row*2-1;col++){
            cout<<"*";
        }cout<<endl;
    }
}