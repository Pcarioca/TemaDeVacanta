#include <iostream>
#include <math.h>
using namespace std;
int main(){

 int a, b,i=0,j,m=0;
 cin>>a>>b;
 int t[a][b], v[a*b], x=0;
 bool ok=true;

 while(i<a*b){

    if(m%2==0 && int(sqrt(m))==sqrt(m)){
        v[x]=m; x++;
        cout<<m<<" "<<endl;
        i++;

    }

    m++;
    }

    for(i=b;i>=0;i--){
        for(j=a;j>0;j--){
            t[j][i]=v[x];
            cout<<"---"<<v[x]<<"---"<<endl;
            x--;
        }
    }

    for(i=0;i<=a;i++){
        for(j=0;j<=b;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    }




