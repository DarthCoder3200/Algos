#include<iostream>
using namespace std;

void quicksort(int a[],int l , int r){
 if(l<r){
  int pivot = a[l];
  int i = l+1;
  int j = l+1;
  for( ; j < r;j++){
    if(a[j] < pivot){
      swap(a[i],a[j]);
      i++;
    }
  }
  swap(a[i-1],a[l]);
  quicksort(a,l,i-2);
  quicksort(a , i,r);
}
}

int main(){
  int a[] = {1,2,3,4,6,5};
  quicksort(a,0,6);
  
  for(int i =0; i<6;i++){
    cout<<a[i]<<" ";
    
  }
  return 0;
}