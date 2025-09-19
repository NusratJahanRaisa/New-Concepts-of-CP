#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    // int n;cin>>n;
    set <int> s;
    // while (n--)
    // {
    //     /* code */
    //     int q,x;cin>>q>>x;
    //     if(q==1) s.insert(x);
    //     else if(q==2) s.erase(x);
    //     else{
    //         if(s.count(x)==1) yes
    //         else no
    //     }
    // }

    s.insert(2);
    s.insert(23);
    s.insert(22);
    s.insert(26);
    s.insert(26);
    s.insert(26);
    s.insert(26);
    
    int p = s.erase(2);
    int q = s.erase(28);

    int x = s.count(26);
    cout<<p<<endl;
    cout<<q<<" "<<x<<endl;
    return 0;
}
