#include <stdlib.h>
#include <iostream>
#define lli long long int
#define li long int
using namespace std;
 
int main(){
    string dna;
    cin>>dna;
    lli i=0;lli j=0;lli tmp=0;
    while(dna[i+1]){
        if(dna[i]==dna[i+1]){j+=1;}
        else{if(j>tmp){tmp=j;j=0;}j=0;}
        i+=1;
    }
    if(j>tmp){tmp=j;j=0;}
    cout<<tmp+1;
   
 
}
