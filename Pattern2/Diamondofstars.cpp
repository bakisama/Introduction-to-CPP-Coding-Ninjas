#include <iostream>
using namespace std;

int main(){
    int i,j,k,flag,space,n;
    cin>>n;
    int mid = (n+1)/2;
    for(i=1;i<=mid;i++){
        space=mid-i;
        while(space>0){
            cout<<" ";
            space--;
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(k=i-1;k>0;k--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=mid;i<n;i++){
        for(space=mid;space<=i;space++){
            cout<<" ";
        }
        for(j=n-mid+1;j>0;--j){
            cout<<"*";
        }
        cout<<endl;
        
        
    }
}