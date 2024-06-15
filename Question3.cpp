#include<iostream>
#include<deque>
#include<algorithm>
#include<numeric>
#include <cstdint>
using namespace std;

int64_t sum(deque<long long> arr , int k){
    while(k--){
        long long max = arr.back();
        long long min = *arr.begin();
        long long value = max - min;
        arr.pop_back();
        arr.pop_front();
        auto it = upper_bound(arr.begin(),arr.end(),value);
        arr.insert(it,value);
    }
    int64_t sum = accumulate(arr.begin(),arr.end(),0);
    return sum;
}

int main(){
    int N,Q,i;
    cin>>N>>Q;
    deque<long long> arr(N);
    for(i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    while(Q--){
        int q;
        cin>>q;
        cout<<sum(arr,q)<<" ";
    }
return 0;
}
