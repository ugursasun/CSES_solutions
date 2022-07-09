#include <stdlib.h>
#include <iostream>
#define lli long long int
#define li long int
using namespace std;

int main(){
    lli nmb;cin>>nmb;
    li arr[nmb+1]={0};
    li tmp=0;
	for(size_t i=0;i<nmb-1;i++){
        cin>>tmp;
		arr[tmp]=tmp;
    }
    for(size_t i=1;i<=nmb;i++){  
        if(arr[i]==0){cout<<i;}
		
    }
 
}
