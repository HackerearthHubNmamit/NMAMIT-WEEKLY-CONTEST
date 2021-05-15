#include <bits/stdc++.h>
using namespace std;
 
int main(){
	
	int t;
	cin>>t;//testcase input
	while(t--){   
		string n;
		cin>>n;
	int	flag=0;
	for(char a:n)
	{
		if(a!='6' && a!='9'){
			cout<<"NO"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"YES"<<endl;}
	}
	return 0;
}