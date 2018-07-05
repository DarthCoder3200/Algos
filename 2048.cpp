#include<iostream>
using namespace std;

void bapu(int n){
  if(n/10 == 0){
    cout<<"we got "<<n<<" ";
    return;
    }
  bapu(n/10);
  bapu(n%10);
  return;
  }


int main(){
    
  bapu(855);
  return 0;
}