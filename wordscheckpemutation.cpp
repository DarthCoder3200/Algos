#include<iostream>
#include<cstring>
using namespace std;

bool isPermutation(char* s1,char* s2){
    if(strlen(s1) == strlen(s2))
{
    int a[400] = {0};
    int b[400] = {0};
    for(int i = 0; i<strlen(s1);i++){
        a[s1[i] - 'a']++;
    }
    for(int i = 0; i<strlen(s1);i++){
        b[s1[i] - 'a']++;
    }
    for(int k; k<400;k++){
        if(a[k] != b[k]){
            return false;
        }
    }
    return true;
}
    return false;
}

int main() {
    char q[] = "chadarmod";
    char w[] = "madarchod";
    if(isPermutation(q,w)){
        cout<<"fuck this is a permutation";
    }
	return 0;
}