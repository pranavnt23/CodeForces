#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int size;
        cin>>size;
        vector<bool> par((size*2),false);
        
        for(int j=0;j<(size*2);j++){
          int inp;
          cin>>inp;
            if(inp%2==0){par[j]=true;}    
        }
        int c1=0,c2=0;
        c1=count(par.begin(),par.end(),false);
        c2=count(par.begin(),par.end(),true);
        if(c1==c2){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }
    
}
