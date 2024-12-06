#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t != 0){

        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }

        unordered_map<int, int> map;
        long long count = 0;
        for(int i = 0; i < n; i++){
            int key = a[i] - i;

            if(map.find(key) != map.end())
                count += map[key];

            map[key]++;
        }

        cout<<count<<endl;
        t--;
    }
}
