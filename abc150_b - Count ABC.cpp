

#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    string str;
    cin>>str;
    int res=0;
    for (int i=0;i <= str.length()-3;i++){
        if (str[i]=='A' && str[i+1] == 'B' && str[i+2] == 'C') res++;
    }
    cout<<res<<"\n";
}
