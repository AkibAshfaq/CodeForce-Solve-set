#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    int solve = 0;

    int n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        if((a+b+c) >= 2)
            solve++;
    }

    cout<<solve;
}