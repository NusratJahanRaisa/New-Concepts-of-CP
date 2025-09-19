#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n,x;cin>>n>>x;
    vector <int> v;
    while (n--)
    {
        /* code */
        int a;cin>>a;
        v.push_back(a);
    }

     map <int,int> m; //1sr ta value(key) ...2nd ta freq
        
        for(int i=0;i<v.size();i++) m[v[i]]++;
        
        // for(auto u: m){
        //     if(x==u.first) return u.second;
        // }

        cout<<m[5]<<endl;
    
    return 0;
}
