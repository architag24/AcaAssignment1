#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,temp;
        int64_t k;
        cin>>n>>k;
        priority_queue<int> input;
        for(i=0;i<n;i++){
            int x;
            cin>>x;
            input.push(x);
        }
        int64_t sum=0;
        while(sum<=k && temp>0){
            temp = input.top();
            sum += temp;
            if(sum>k) break;
            else{
                input.pop();
                input.push(temp-1);
            }
        }
        cout<<input.top()<<endl;
    }
return 0;
}
