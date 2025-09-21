#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    // Sorts elements automatically in decreasing order


    // priority_queue <pair<int,int>> pq;

    priority_queue <pair<int,int>,vector <pair<int,int>>, greater<pair<int,int>>> pq;

    pq.push({1,2});
    pq.push({3,4});
    pq.push({1,5});
    pq.push({4,5});
    pq.push({5,6});
    pq.push({123,6});

    while (!pq.empty())
    {
        /* code */
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }

// 123 6
// 5 6
// 4 5
// 3 4
// 1 5
// 1 2
    
    return 0;
}
