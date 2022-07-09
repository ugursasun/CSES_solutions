#include <stdlib.h>
#include <iostream>
#define lli long long int
#define li long int
using namespace std;
/*       O(n^3) complexity 
int main(){
	li cnt,plc;cin>>cnt;
	for(li i=1;i<=cnt;i++){
		lli _max=i*i;//pow() is dangerous for integers
		lli res=0;
		for (size_t f=1; f <=i; f++)//row
		{
			for(size_t q=1;q<=i;q++){//col
				if(0<(q+2) && 0<(f+1) && (f+1<=i) && (q+2<=i)){res++;}
				if(0<(q-2) && 0<(f+1) && (f+1<=i) && (q-2<=i)){res++;}
				if(0<(q+2) && 0<(f-1) && (f-1<=i) && (q+2<=i)){res++;}
				if(0<(q-2) && 0<(f-1) && (f-1<=i) && (q-2<=i)){res++;}
				if(0<(q+1) && 0<(f+2) && (f+2<=i) && (q+1<=i)){res++;}
				if(0<(q-1) && 0<(f+2) && (f+2<=i) && (q-1<=i)){res++;}
				if(0<(q+1) && 0<(f-2) && (f-2<=i) && (q+1<=i)){res++;}
				if(0<(q-1) && 0<(f-2) && (f-2<=i) && (q-1<=i)){res++;}
 
			}
 
		}
		cout<<((_max*(_max-1))-res)/2<<endl;
		res=0;
		
	
	}
 
}*/

int main(){
	li cnt;cin>>cnt;
	for(li i=1;i<=cnt;i++){
		lli res = 4*(i-1)*(i-2);//check this link for the explanation of the formula 
							   //https://www.codespeedy.com/the-two-knights-problem-implemented-in-c/#:~:text=The%20two%20knights%20problem%20is,problem%20than%20an%20algorithmic%20one.
		lli _nmax=i*i;
		cout<<(_nmax*(_nmax-1)/2)-res<<endl;
	}
}