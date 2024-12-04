#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string first, second;
    cin>>first;
    cin>>second;
    int compare = 0;
    for(int i = 0; i < first.length(); i++){
        char a = toupper(first[i]);
        char b = toupper(second[i]);
            
        if (a < b){
            compare = -1;
            break;
        }
            
        if (a > b){
            compare = 1;
            break;
        }
    }
    
    cout<<compare;
    return 0;
}
