#include<iostream>
using namespace std;

void calclargest_l_r(int a[],int l[],int r[],int n){
int max = 0;
  l[0] = 0;
  for(int i = 1; i < n ; i++){
    if(max < a[i-1]){
      max = a[i-1];
    }
      l[i] = max;
    }
    max = 0;
  r[n-1] = 0;
   for(int k = n-2;k >=0;k--){
     if(max<a[k+1]){
       max = a[k+1];
     }
     r[k] = max;
   }
}

int main(){
  int a[] = {1,3,4,1,5,6,7,2,5,6};
  int n = sizeof(a)/sizeof(int);
  int l[n] , r[n];
  calclargest_l_r(a,l,r,n);
  int wt = 0;
  int p = 0;
  for(int i = 1; i < n-1 ; i++){
    p = min(l[i],r[i]);
    if((p - a[i]) > 0){
      wt = wt + (p - a[i]);
    }
  }
  
  cout<<wt<<endl;
  
  
  return 0;
}