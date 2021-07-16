#include <iostream>
using namespace std;
int main(){

    int x,y,i,nr,aux;
    cin>>x>>y;
    if(x>y){
        aux=x;
        x=y;
        y=aux;
    }
    nr=1;
    for(i=y; i>x;i--){
        cout<<"1";
        if(nr>=x){
            cout<<"2";
        }
        nr=nr*3;
        cout<<"1";
    }

}
/*
 d.
 citeste x,y
 daca(x>y) atunci x<->y
 nr<-1
 i=y
 cat timp i>x executa
    scrie i
        daca nr>=x atunci scrie 2
    nr<-nr*3
    scrie 1
    i<-i-1



*/
