#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool cmp(const pair<int,int> &p1 , const pair<int,int> &p2) {
   
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    else return 0;
}


int main(){ 
    optimize();  
    
    vector <pair<int,int>> v;
    
    v = {{4,500},{1,200},{4,123},{4,200},{2,300},{3,120}};

    sort(v.begin(),v.end(),cmp);
    
    for(auto u : v){
        cout<<u.first<<" "<<u.second<<endl;
    }
    return 0;
}
