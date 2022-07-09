#include <stdlib.h>
#include <iostream>
#define lli long long int
#define li long int
using namespace std;
 
int main(){
    
    li nmb;cin>>nmb;li arr[nmb]={0}; 
    for(size_t i=0;i<nmb;i++){
        cin>>arr[i];
    }
    li count=0;
    for(size_t i=0;i<nmb-1;i++){
        while(arr[i]>arr[i+1]){arr[i+1]+=1;count++;}
    }
    cout<<count;
   
 
}
