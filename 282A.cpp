#include<iostream>
using namespace std;

int main(){

    int x = 0;
    int turn;
    cin>>turn;
    string statement;
    for(int i = 0; i < turn; i++)
    {   
        cin>> statement;
        if(statement == "++X" || statement == "X++")
            x++;
        if(statement == "--X" || statement == "X--")
            x--;
    }
    cout<<x;
}