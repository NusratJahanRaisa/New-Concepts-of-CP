#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    pair <int,int> a[] = {{1,2},{3,4},{4,5},{6,7}};

    sort(a,a+4);

    for(int i=0;i<4;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl; 
    }

    return 0;
}
