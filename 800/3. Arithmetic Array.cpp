#include<bits/stdc++.h>

using namespace std;

int main(){
    int tests;
    cin>>tests;
    
    for(int i=0;i<tests;i++){
        int arrs,sum=0;
        cin>>arrs;
        for(int i=0;i<arrs;i++){
            int ele;cin>>ele;
            sum+=ele;
        }
        if(sum==arrs){
            cout<<0<<endl;
        }
        else{
            int ans;
            if((sum-arrs)>0){
                ans=sum-arrs;
                ans=abs(ans);
            }
            if((sum-arrs)<0){
                ans=1;
            }
            /*else{
                ans=sum+arrs;
                ans=abs(ans);
            }*/
            cout<<ans<<endl;
        }
    }
}
