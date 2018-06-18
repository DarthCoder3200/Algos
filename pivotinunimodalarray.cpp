#include<iostream>
using namespace std;
int pivot(int a[],int l,int r){
  int m = (l+r-1)/2;
  if(a[m-1]<a[m] && a[m] > a[m+1]){
    return a[m];
  }
  else if(a[m] > a[m-1] && a[m]<a[m+1]){
    return pivot(a,m+1,r);
  }
  else if(a[m] < a[m-1] && a[m]>a[m+1]){
    return pivot(a,l,m-1);
  }
}
int main(){
  int a[] = {1,2,3,4,5,6,120,60,59,40};
  cout<<pivot(a,0,9);
  return 0;
}