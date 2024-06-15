#include<bits/stdc++.h>
using namespace std;
#define mod 998244353;

int64_t TotalWays(int64_t n , int k, vector<int64_t> arr){
    if(n==0) return 1;
    if(n<0) return 0;
    if(arr[n]!=-1){
        return arr[n];
    }
    int64_t ways = 0;
    for(int j=1 ; j<=k ; j++){
        ways = (ways + TotalWays(n-j,k,arr))%mod;
    }
    arr[n] = ways;
    return ways;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int64_t n;
        int k;
        cin>>n>>k;
        vector<int64_t> arr(n+1,-1);
        cout<<TotalWays(n,k,arr)<<endl;
    }
return 0;
}
