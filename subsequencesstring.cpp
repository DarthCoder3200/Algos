#include<iostream>
using namespace std;

void subsequences_print(char *in,char *ou,int i,int j){
  //base case
  if(in[i] =='\0'){
    ou[j] = '\0';
    cout<<ou<<endl;
    return;
  }
  
  ou[j] = in[i];
  subsequences_print(in,ou,i+1,j+1);
  subsequences_print(in,ou,i+1,j);
  
}

int main(){
  
  char a[100];
  cin>>a;
  char b[100];
  subsequences_print(a,b,0,0);
  
  return 0;
}