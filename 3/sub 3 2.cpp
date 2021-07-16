#include <iostream>
#include <string.h>
using namespace std;
int main(){

 int n,k,l,j=0;
 char v[21], p[500];
 cout<<"n="; cin>>n;
 cout<<"k="; cin>>k;

    for(int i=1; i<=n; i++){
        cout<<"baga text";
        cin.get(v,20);
        cin.get();
        l = strlen(v);
        if(strcmp( v[l],"aeiou")==0){
            j++;
            strcat(p,"\n");
            strcat(p,v);
        }
        if(j>k) break;
    }
    if(j>0){
        cout<<p;
    } else {
        cout<<"NU EXISTA";
    }
}
