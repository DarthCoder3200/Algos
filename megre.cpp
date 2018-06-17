#include<iostream>
using namespace std;

void merge(a[],int l, int m , int r){
  int n1 = m-l + 1;
  int n2 = r - m;
  int L[n1],M[n2];
  for(int i = 0; i<n1 ; i++)
    L[i] = a[l+i];
  for(int k = 0; k<n2 ; k++)
    M[k] = a[m + k + 1];
  
  int p = 0;
  int q = 0;
  int r = l;
  while (p < n1 || q < n2){
    if(L[p] < M[q]){
      a[r] = L[p];
      r++;
      p++;
    }
    else{
      a[r] = M[q];
      r++;
      q++;
    }
  }
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
void mergesort(int a[], int l , int r ){
  int m = l+r;
  m = m/2:
  
  mergesort(a[], l , m);
  mergesort(a[], m + 1 , r );
  
  merge(a[], l , m , r);
}


int main(){
  int a[] = {1, 3,4,5,2,7,9,8};
  mergesort(a , 0 , 7);
  printArray(a,8);
  
  return 0;
}