#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int s[4];
        cin>>s[0]>>s[1]>>s[2]>>s[3];

        int winner_one, winner_two;
        
        // 1st pair
        if(s[0] > s[1])
            winner_one = s[0];
        else
            winner_one = s[1];
        // 2nd pair
        if(s[2] > s[3])
            winner_two = s[2];
        else
            winner_two = s[3];

        for(int i = 0; i < 4; i++)
        {
            for(int j = i + 1; j < 4; j++)
            {
                if(s[i] > s[j])
                {
                    int temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
            
        }
        
        if((winner_one == s[3] && winner_two == s[2]) || (winner_two == s[3] && winner_one == s[2]))
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    
    }
}