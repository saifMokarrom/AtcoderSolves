


#include <bits/stdc++.h>
using namespace std;


int main(){

    long long n,k;
    vector<long long> v;
    cin>>n>>k;

    for (long long int i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }
    long long res=0;
    long long sum=0;
    long long j=-1;
    for (long long i=0;i<n;i++){

        if (sum>=k){
            res+=(n-1)-(j-1);

            sum-=v[i];
        }
        else{
            j+=1;
            for ( ;j<n;j++){
              sum+=v[j];
              if (sum >= k) break;

            }
            if (sum < k) break;

            res+=(n-1)-(j-1);
            sum-=v[i];
        }

    }
    cout<<res<<"\n";
}
