#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int a[2*n];
        for(int i = 0; i < 2*n; i++){
            cin>>a[i];
        }

        int odd  = 0, even = 0;
        for(int i = 0; i < 2*n; i++){
            if(a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        
        // n*odd + n*even = n*odd 

        if(even == odd)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
        
    }
}