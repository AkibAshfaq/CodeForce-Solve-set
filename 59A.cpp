#include <IOSTREAM>
using namespace std;

int main(){

    string word;
    cin>>word;

    int upper = 0;
    for(int i = 0; i < word.length(); i++)
    {
        if((int) word[i] <= 90)
            upper++;
    }
    
    if( word.length() - upper >= upper){
        for(int i = 0; i < word.length(); i++)
        {
            cout<<(char) tolower(word[i]);
        }
    }
    else
    {
        for(int i = 0; i < word.length(); i++)
        {
            cout<<(char) toupper(word[i]) ;
        }
    }
}
