#include<iostream>
using namespace std;

void sumtilln(int a[] , int b[],int n){
  for(int i =0;i<n;i++){
    b[i] = b[i] + a[i];
  }
  
}

int max_sum(int a[],int b[],int n){
  int ms = 0;
  int cs = 0;
  for(int i = 0;i<n;i++){
    cs = cs + b[i];
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
  int b[100];
  sumtilln(a,b,9);
  cout<<max_sum(a,b,9);
  return 0;
}