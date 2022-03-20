


#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k,m;
    cin>>n>>k>>m;
    int sum=0;
    for (int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;
    }

    if (n*m <= sum) cout<<0<<"\n";
    else if (((n*m)- sum) > k) cout<<-1<<"\n";
    else cout<<(n*m)- sum<<"\n";
}
