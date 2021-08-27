#include<iostream>
using namespace std;

int reversDigits(int num) 
{ 
static int rev_num = 0; 
static int base_pos = 1; 
if(num > 0) 
{ 
    reversDigits(num/10); 
    rev_num += (num%10)*base_pos; 
    base_pos *= 10; 
} 
return rev_num; 
} 
  
 
int main() 
{ 
    int num;
    cin>>num;
    cout <<reversDigits(num); 
  
    return 0; 
} 