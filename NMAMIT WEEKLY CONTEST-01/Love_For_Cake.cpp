#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
	
	long long d,m,n;
	cin>>n;
	long long a[n];
    	for(int i=0; i<n; ++i)
    	{
        	cin>>a[i];
    	}
    	int i=0;
    	int j=n-1;
    	int A=a[i],B=a[j];
    	int ca=0,cb=0;
    	while(1)
    	{
        	if(A>B)
        	{
            		B+=a[--j];
            		cb++;
        	}
        	else if(B>=A)
        	{
            		A+=a[++i];
            		ca++;
        	}
        	if(i>j){
			break;
		}
    	}
   	cout<<ca<<" "<<cb<<endl;
	
	return 0;
}