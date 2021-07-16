#include <iostream>
using namespace std;
void divPrim(int n, int &s){
    s=0;
    int p;

    int i=2;
    while(i<=n/2){
        if(n%i==0){

            p=0;
            while(n%i==0){
                n/=i;
                p++;
            }

            if(p%2!=0){
                s+=i;
            }
        }
        i++;
    }

}
int main(){
    int s;
    divPrim(360, s);
    cout<<s;
}
