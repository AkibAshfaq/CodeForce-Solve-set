#include <iostream>
using namespace std;

int main(){

    float w;
    cin>>w;
    float div = w /2;
    if( div > (int)div)
        cout<<"NO"<<endl;
    else if((int)w%2 == 0 && w > 2)
        cout<<"YES"<<endl;
    else     
        cout<<"NO"<<endl;

    return 0;
}