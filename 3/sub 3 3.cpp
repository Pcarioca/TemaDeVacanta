#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream f("bac.txt");
    int a, x,nrc = 0,aux,i, aux2, j, aux3;
    bool suf;
    f >> a;
    a = aux;
    while(aux>0){
        aux /= 10;
        nrc++;
    }
    j=0;
    while(!f.eof()){

        f>>x;
        aux2 = x;
        for(i=1;i<=nrc;i++){
            aux = x%10;
            x /=10;
        }

        if(aux = aux2){
            j++;

        } else j=0;
        if(j=2){
            cout<<aux3<<" "<<aux;
            break;
        }
        aux3 = aux;
    }
}
