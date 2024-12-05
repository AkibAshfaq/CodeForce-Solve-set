#include<iostream>
using namespace std;

int main(){

    int location;
    cin>>location;

    int steps = 0;
    while(location != 0){
        
        if(location >= 5)
        {
            steps += location / 5;
            location = location % 5;
        }
        else if(location >= 4)
        {
            steps += location / 4;
            location = location % 4;
        }
        else if(location >= 3)
        {
            steps += location / 3;
            location = location % 3;
        }
        else if(location >= 2)
        {
            steps += location / 2;
            location = location % 2;
        }
        else if(location >= 1)
        {
            steps += location / 1;
            location = location % 1;
        }
    }

    cout<<steps;
}