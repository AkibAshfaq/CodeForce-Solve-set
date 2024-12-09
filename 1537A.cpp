#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        int a[n];
        float add = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            add += a[i];
        } 
        
        if(add == n){
            cout<<0<<endl;
            continue;
        }
        int x = (n + 1) - add;
        if(x < 0)
            cout<<abs(x) + 1<<endl;
        else 
            cout<<1<<endl;
    }
}