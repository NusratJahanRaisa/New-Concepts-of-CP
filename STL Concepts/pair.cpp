#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    pair <string,vector<int>> p;
    p.first = "raisa";
    p.second = {1,2,3};

    for(int i=0;i<p.second.size();i++){
        cout<<p.second[i]<<endl; 
    }
    for(auto u: p.second){
        cout<<u<<" ";
    }

    return 0;
}
