#include<iostream>
using namespace std;

int main(){

    int n, k;
    cin>>n>>k;
    int score[n];
    for(int i = 0; i < n; i++){
            cin>>score[i];
    }
    
    int next =0;
    for(int i = 0; i < n; i++){
            if(score[i] >= score[k-1] && score[i] > 0)
                next++;
    }

    cout<<next;
}