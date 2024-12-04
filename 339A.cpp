#include <iostream>
using namespace std;

int main(){

    string s;
    cin>>s;
    int index = 0;
    string sorted[51]; // 100 characters so 51 intigers

    for(int i = 0; i < s.length(); i++)   //geting the numbers
    {   
        if(s[i] != '+')
        {
            sorted[index++] = s[i];
        }
    }   

    for(int i = 0; i < index; i++)  // Sorting the numbers
    {
        for(int j = i + 1; j < index; j++)
        {
            if(sorted[i] > sorted[j])
            {
                string temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    //output
    cout<<sorted[0];
    for(int i = 1; i < index; i++)
    {   
            cout<<"+"<<sorted[i];
    } 
}