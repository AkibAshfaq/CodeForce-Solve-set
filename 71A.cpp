#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    string a;
    
    for(int i = 0; i < n; i++)
    {
        cin>>a;
        int l = a.length();
        
        if (l <= 10)
            cout<<a<<endl;
        else 
            cout<<a[0]<<(l-2)<<a[l-1]<<endl;
    }
    
    return 0; 
}