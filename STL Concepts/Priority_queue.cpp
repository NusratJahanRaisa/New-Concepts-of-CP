#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    // Sorts elements automatically in decreasing order
    priority_queue <int> pq;
    pq.push(12);
    pq.push(122);
    pq.push(1);
    pq.push(2);
    pq.push(102);
    pq.push(123);

    while (!pq.empty())
    {
        /* code */
        cout<<pq.top()<<endl;
        pq.pop();
    }
    
    return 0;
}
