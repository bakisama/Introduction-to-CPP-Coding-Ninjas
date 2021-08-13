#include<iostream>
using namespace std;


int main(){
int s,e,w,c;
    cin>>s;
    cin>>e;
    cin>>w;
    for(;s<=e;){
        c=((s-32)*5)/9;
        cout<<s<<"\t"<<c<<endl;
        s=s+w;
        

    }
  
  
}

