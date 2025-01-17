#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int num;
    cin>>num;
    vector<int> arr(num,0);
    for(int i=0;i<num;i++){
        int in=0;
        cin>>in;
        arr[i]=in;
    }
    int num1=0,num2=0;
    for(int i=0;i<arr.size();i++){
        num1=ceil((arr[i]/3)+((arr[i]%3)!=0));
        num2=floor(arr[i]/3);
        int amt=num1+(num2*2);
        if(amt!=arr[i]){swap(num1,num2);}
        cout<<num1<<" "<<num2<<"\n";
    }
}
