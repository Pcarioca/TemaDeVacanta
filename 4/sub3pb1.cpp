#include <iostream>
using namespace std;
void prime(int&n,int&x,int&y){

    int a=2, i,b=0,c=0;
    bool prim=true;
    while(a<n){


            prim=true;
        for(i=2; i<=a/2;i++){
            if(a%i==0){
                prim=false;
                break;
            }
        }
    if(prim == true){ b=c;
    c=a;}


        a++;
    }

    x=c; y=b;

}
int main(){
    int n, x,y;
    cin>>n;
    prime(n,x,y);
    cout<<x<<" "<<y;
}
