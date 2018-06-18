#include<iostream>
using namespace std;
//given a sorted array of size n
int idxAi_i(int a[],int l,int r){
  int m = l + ((r-1)/2);
  if(a[m] == i){
    return m;
  }
  else if(a[m]>i){
    return idxAi_i(a,l,m-1);
  }
  else if(a[m]<i){
    return idxAi_i(a,m+1,r);
  }
  else{
    return -1;
  }
}
int main(){
  int a[]={-1,1,3,4,5,6,8};
  cout<<"the index is "<<idxAi_i(a,0,6)<<endl;
  return 0;
}