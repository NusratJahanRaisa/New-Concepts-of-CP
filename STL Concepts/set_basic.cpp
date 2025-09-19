#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    int n;cin>>n;
    set <int> s;
    while (n--)
    {
        /* code */
        int q,x;cin>>q>>x;
        if(q==1) s.insert(x);
        else if(q==2) s.erase(x);
        else{
            set <int> :: iterator it;
            it = s.find(x);

            if(it==s.end()) no
            else yes 
        }
    }
    

    return 0;
}
