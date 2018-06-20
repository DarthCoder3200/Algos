#include<iostream>
using namespace std;
//k is the kth order statistic
int rand_select(a[] , int n , int k){
  if(n == 1){
    return a[0];
  }
  int pivot = a[0];
  int i = 1;
  int j = 1;
  for( ; j < n;j++){
    if(a[j] < pivot){
      swap(a[i],a[j]);
      i++;
    }
  }
  swap(a[i-1],a[0]);
 if(i == k){
   return a[i-1];
 } 
  if(i > k){
    return rand_select(a,i -1,k);
  }
  if(i < k){
    return rand_select(a + i,n-i,k );
  }
}
 

int main(){
  
int a[] = {1,2,4,3,5,6,32,16,14};
  cout<<rand_select(a, 9, );
}