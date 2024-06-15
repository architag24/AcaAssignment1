#include<iostream>
using namespace std;
int min(int a,int b){
    if(a>b) return b;
    else return a;
}
int main(){
    int n,m;
    int ans,diff;
    cin>>n>>m;
    int minm = min(n,m);
    int maxm = n+m-minm;
    diff = maxm - minm;
    if(minm==1){
        if(maxm>0 && maxm<=2){
            cout<<diff;
        }
        else{
            cout<<"-1";
        }
    }
    else{
        ans = 2*(minm-1);
        if(maxm!=minm){
            if((diff)%2==0){
                ans += diff*2;
            }
            else{
                ans += diff*2 - 1;
            }
        }
        cout<<ans;
    }
return 0;
}
