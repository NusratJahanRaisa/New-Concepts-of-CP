#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    vector <pair<int,int>> v;

    v.push_back({1,2});
    v.push_back({1,5});
    v.push_back({5,2});
    v.push_back({9,2});
    v.push_back({10,21});
    v.push_back({3,4});
 
    sort(v.rbegin(),v.rend());

    for(auto u : v){
        cout<<u.first<<" "<<u.second<<endl;
    }

    return 0;
}
