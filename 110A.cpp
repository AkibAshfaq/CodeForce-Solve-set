#include <iostream>
using namespace std;

int main(){

    long long n;
    cin>>n;

    int lucky = 0;
    while(n != 0){
        
        int s = n % 10;

        if(s == 7 || s == 4)
            lucky++;
        
        n = n / 10;
    }

    if(lucky == 7 || lucky == 4)
        cout<<"YES";
    else 
        cout<<"NO";
    
    return 0;
}