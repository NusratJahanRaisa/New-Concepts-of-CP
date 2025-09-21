#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    multiset <int> s;
    s.insert(2);
    s.insert(12);
    s.insert(222);
    s.insert(1);
    s.insert(23);
    s.insert(23);
    s.insert(23);
    s.insert(23);
    s.insert(22);
    s.insert(22);
    s.insert(26);
    s.insert(26);
    s.insert(26);
    s.insert(26);

    // cout<<s.count(26)<<endl;

    // for(auto it=s.begin();it!=s.end();it++) cout<<*it<<endl;

    // for(auto u : s){
    //     cout<<u<<" ";
    // }
    // cout<<endl;

    // deleting all alike elements 
    s.erase(26);
    for(auto u : s){
        cout<<u<<" ";
    }
    cout<<endl;


    // deleting only one element

    multiset <int> :: iterator it;
    
    it=s.find(23);

    s.erase(it);

    for(auto u : s){
        cout<<u<<" ";
    }
    cout<<endl;

    return 0;
}
