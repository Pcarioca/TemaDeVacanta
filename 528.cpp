/*
#528. [2013-12-08 - 23:46:32]
Se citeste un numar natural n si apoi n numer naturale. Sa se determine cate dintre cele n numere cititi au proprietatea ca au numarul de divizori egal cu pozitia pe care au fost citite.
Exemplu:
6
1 4 8 10 12 18
Rezultatul este 3 deoarece:
- 1 are un divizor si a fost citit pe pozitia 1
- 10 are 4 divizori si a fost citit pe pozitia 4
- 18 are 6 divizori si a fost citit pe pozitia 6 */
#include <iostream>
using namespace std;

int nrdiv(int x){

    int i,j=0;
    for(i=2;i<=x/2;i++) if(x&i==0) j++;
    return j;

}


int main(){

    int n,i,j=0,h;

    cin>>n;
    for(i=1;i<=n;i++){
        cin>>h;
        if(nrdiv(h)==i) j++;
    }
    cout<<j;





}
