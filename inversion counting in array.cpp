#include<iostream>
using namespace std;

int count = 0;

int merge(int a[],int l, int m , int r){
  int n1 = m-l + 1;
  int n2 = r - m;
  int L[n1],M[n2];
  for(int i = 0; i<n1 ; i++)
    L[i] = a[l+i];
  for(int k = 0; k<n2 ; k++)
    M[k] = a[m + k + 1];

  int p = 0;
  int q = 0;
  int h = l;
 while (p < n1 && q < n2){
    if(L[p] < M[q]){
      a[h] = L[p];
      h++;
      p++;
    }
    else{
      a[h] = M[q];
      h++;
      q++;
      count = count + (n1 - p);
    }
  }
  
  while(p<n1){
    a[h] = L[p];
    p++;
    h++;
  }
  while(p<n2){
    a[h] = M[q];
    q++;
    h++;
  }
  return count;
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<A[i]<<" ";

}
int mergesort_count(int a[], int l , int r ){
    if(l<r){
  int m = (l+r)/2;


  mergesort(a, l , m);
  mergesort(a, m + 1 , r );

  return merge(a, l , m , r);
}
}


int main(){
  int a[] = {2,3,4,5,6,1};
  cout<<mergesort_count(a , 0 , 5)<<endl;
  printArray(a,6);

  return 0;
}