#include <stdlib.h>
#include <iostream>
#include <math.h>
#define lli long long int
using namespace std;

int main(){
    fio;
    lli cnt;cin>>cnt;
    lli res[cnt]={0};
    for(int i=0;i<cnt;i++){
        lli row,col;
        cin>>row>>col;
        if(row>col){
            lli nNn=row*row-row+1;
            if(row%2){//decrease to left
                res[i] = nNn - (row-col);
            }else{
                res[i] = nNn + (row-col);
            }
        }
        else if(col>row){
            lli nNn=col*col-col+1;
            if(col%2){//increase to up
                res[i] = nNn + (col-row);
            }else{
                res[i] = nNn - (col-row);
            }
        }
        else{res[i] = row*row-row +1;}
    }
    
    for(lli i=0;i<cnt;i++){cout<<res[i]<<endl;}
}
