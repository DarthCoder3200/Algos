#include<iostream>
using namespace std;

int max_sum(int a[],int n){
  int ms = 0;
  int cs = 0;
  for(int i = 0;i<n;i++){
    cs = cs + a[i];
    if(cs>ms){
      ms =cs;
    }
    if(cs<0){
      cs =0;
    }
  }
  
  return ms;
}

int main(){
  int a[] = {1,2,14,-4,-5,6,7,-3,4};
  cout<<max_sum(a,9);
  return 0;
}