#include<iostream>
using namespace std;

int tile_4(int n){
  if(n==4){
    return 2;
  }
  if(n<4){
    return 1;
  }
  
  return tile_4(n-1) + tile_4(n-4);
}

int main(){
  
  cout<<tile_4(6);
  
  return 0;
}