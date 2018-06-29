#include<iostream>
#include<cstring>
using namespace std;

void rotate_array(char *a,int p){
 int i = strlen(a);
 int k = i;
 while(i>=0){
     a[i+p] = a[i];
     i--;
 }
 i = strlen(a);
 int u = i-p;
 int s =0;
 while(u<i){
     a[s] = a[u];
     s++;
     u++;
 }
 a[i-p] = '\n';
}

int main(){
  char a[1000] = "codingninja";
  rotate_array(a,3);
  cout<<a;

  
  return 0;
}