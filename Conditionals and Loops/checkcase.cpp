#include<iostream>
using namespace std;

int main() {
	int c;
    char x;
    cin>>x;
    c=int(x);
    if(c>=65&&c<=90){
        cout<<"1";}
    else if(c>=97&&c<=122){
        cout<<"0";}
    else{
        cout<<"-1";}
	
}

