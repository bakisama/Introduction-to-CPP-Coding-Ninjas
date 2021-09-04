#include<iostream>
using namespace std;
#include <climits>

int main(){
   int n,largest,second;
   int num[20];
   cin>>n;
   for(int i=0; i<n; i++){
      cin>>num[i];
   }
   if(num[0]<num[1]){ 
      largest = num[1];
      second = num[0];
   }
   else{ 
      largest = num[0];
      second = num[1];
   }
   for (int i = 0; i< n ; i ++) {
      if (num[i] > largest) {
         second = largest;
         largest = num[i];
      }
      else if (num[i] > second && num[i] != largest) {
         second = num[i];
      }
   }
    for(int i = 0; i<2;i++){
        if(num[i]==num[i+1]){
            second=-2147483648;
        }
    }
   cout<<second;
   
}