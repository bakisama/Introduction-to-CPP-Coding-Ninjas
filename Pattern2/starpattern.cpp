#include<iostream>
using namespace std;


int main(){
    int n,i,j,space;
    cin>>n;
    for(i=1;i<=n;i++){
        space=n-i;
        while(space>0){
            cout<<" ";
            space--;
        }
        for(j=1;j<=i;j++){
            cout<<"*";
            
        }
        
        for(j=i-1;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
      
  
}


