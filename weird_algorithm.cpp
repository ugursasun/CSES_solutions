#include <stdlib.h>
#include <iostream>
using namespace std;
 
 
void thefunc(long int nmb){
    if(nmb==1){
        return;
    }
    else{     
        if(nmb%2){
            nmb=nmb*3 + 1;
            
        }
        else{
            nmb/=2;
        }
        cout<<nmb<<" ";
 
        thefunc(nmb);
    }
    
}
 
int main(){
    long int nmb;cin>>nmb;
    cout<<nmb<<" ";
    thefunc(nmb);
}
