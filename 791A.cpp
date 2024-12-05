#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    if(a > b)
        return 0;
    
    int i = 0;
    while(!(a > b)){
            
        a = a * 3;
        b = b * 2;
        i++;
    }

    cout<<i;
}