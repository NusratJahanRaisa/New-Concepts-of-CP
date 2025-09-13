#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();  
    
    pair <int,int> p1,p2;
    p1 = {2,3};
    p2 = {3,4};

    pair <int ,int> p = min(p1,p2);
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}
