#include<iostream>
using namespace std;
int maxbiotonic(a[] , int n){
  int l = 1 ;
  int ms =1 ;
  int k = 0;
  
  for (int p = 1; p<n ; p++){
    if(a[p] > a[p-1]){
      l++;
      if(k!=0){
        k = 0;
        l = 1;
      }
    }
    if(a[p] < a[p-1]){
      l++;
      if(k!=1){
        k = 1;
      }
    }
    if(l>ms) {
      ms = l;
    }
  }
  return ms;
}

int main(){
  int a[] ={1,2,3,4,5,6,7,8,4,3,1,2};
  cout<<maxbiotonic(a,12);
  return 0;
}