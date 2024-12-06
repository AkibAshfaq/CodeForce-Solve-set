#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t != 0){

        long long n;
        cin>>n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }

        unordered_map<long long, long long> map;
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
