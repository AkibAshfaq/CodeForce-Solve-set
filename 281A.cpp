#include <iostream>
using namespace std;

int main()
{
    string statement;
    cin>>statement;

    int length = statement.length();
    if(length <= 1000)
    {   
        cout<<(char)toupper(statement[0]);;
        for(int i = 1; i < length; i++)
        {
            cout<<statement[i];
        }
    }
}