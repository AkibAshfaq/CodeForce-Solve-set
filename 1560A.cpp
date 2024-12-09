#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int i = 0, j =0;
        while(j != n)
        {   
            i++;
            if((i % 3) != 0 && (i % 10) != 3)
            {
                j++;
            }
        }
        cout<<i<<endl;
    }
}