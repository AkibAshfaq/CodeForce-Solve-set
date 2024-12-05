#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    string color;
    cin>>color;

    int pick = 0;
    for (int i = 0; i < n-1; i++)
    {
            if(color[i] == color[i+1])
                    pick++;
    }

    cout<<pick;
}