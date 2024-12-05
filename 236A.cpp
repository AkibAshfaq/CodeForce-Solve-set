#include<iostream>
using namespace std;

int main(){

    string name;
    cin>>name;
    int length = name.length();

    int distinct = 0;

    for (int i = 0; i < length; i++)
    {   
        int avail = 0;

        for (int j = i + 1; j < length; j++)
        {   
            if(name[i] == name[j])
            {   
                avail++;
                break;
            }
        }

        if(!(avail > 0)) 
            distinct++;
    }

    if (distinct % 2 == 0)
        cout<<"CHAT WITH HER!";
    else 
        cout<<"IGNORE HIM!";
        
}