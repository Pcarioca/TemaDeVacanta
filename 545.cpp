/*
        #545. [2014-01-17 - 22:22:27]
    Se citesc doua numere naturale a si b. Calculati si afisati cate numere din intervalul [a,b] au proprietatea ca sunt incadrate de doua numere prime. Un astfel de numar este 12 (11 si 13 sunt prime).
    Exemplu:
    In intervalul [10,30] sunt 3 astfel de numere (12, 18 si 30)
*/
#include <iostream>
using namespace std;

bool prim(int x){ //M-am uitat pe site-ul "w3Schools" despre chestii noi. Sper sa nu va suparati.

    int i;
    bool k=true;
    for(i=2;i<=x/2;i++){

        if(x%i==0){
            k=false;
            break;
        }

    }
    return k;

}

int main(){

int a,b,i,x,y,k=0,v[50],j;
bool h;

    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    for(i=a;i<=b;i++){

        h=prim(i+1)&&prim(i-1);
        if(h){

            k++;
            v[k]=i;

        }

    }
    cout<<"S-au descoperit"<<" "<<k<<" "<<"numere:";
    for(i=1;i<=k;i++){
        cout<<v[i]<<", ";
    }

}

