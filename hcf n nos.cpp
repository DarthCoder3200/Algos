#include<iostream>
using namespace std;
//USING EUCLID'S LEEMA
int gcd(int a, int b){
  if(b == 0 ){
    return a;
  }
  return gcd(b , a%b);
}

int main(){
  int a[100];
  int n ; 
  cin>>n;
  for(int i =0;i<n;i++){
    cin>>a[i];
  }
  int HCF;
  HCF = gcd(a[0],a[1]);
  if(n>2){
  for(int k = 2;k<n;k++){
     HCF = gcd(a[k] , HCF);
  }
  }
  
  cout<<"the HCF OF THESE NUMBERS IS "<<HCF<<endl;
  return 0;
}