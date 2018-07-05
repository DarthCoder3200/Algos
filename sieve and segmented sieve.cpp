#include<iostream>
using namespace std;

void sieve(bool *p){
  for(int i = 0;i<1000001;i++) p[i] = 1;
  for(int k = 2; k<1000001; k++){
  if(p[k] = 1){
  for(int l = k*k ; l <1000001;l = l + k)
    p[l] = 0;
  }
  }
  p[1] = 0;
  p[0] = 0;
  return;
}
void segmentedsieve(int a,int b){
  bool p[b-a+1];
  int k = sqrt(b);
  bool l[k];
  sieve(l);
    for(int g = 2;g<k; g++){
  if(l[g] = 1){
  for(int u = g*g ; u <b;u = u + g )
  if(u>a)
    p[u-a] = 0;
  }
  }
  return;
}

int main(){
  return 0;
}