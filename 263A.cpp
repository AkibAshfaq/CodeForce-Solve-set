#include<iostream>
using namespace std;

int main(){

    int matrix[5][5];
    int x, y;
    for(int row = 0; row < 5; row++){
        for(int column = 0; column < 5; column++){
            cin>>matrix[row][column];
            if(matrix[row][column] == 1){
                x = row;
                y = column;
            }
                
        }
        cout<<endl;
    }

    cout<<(abs(x-2)+abs(y-2));
}