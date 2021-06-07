#include <bits/stdc++.h>
using namespace std;
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t-->0)
    {
    	 int n;
    	 cin>>n;
         string s;
         cin>>s;
         int counter=0;
         for(int i=0;i<n;i++)
         {
            if(s[i]=='0')
            	   counter++;
         }
         if((counter%2)==1 and s[int(n/2)]=='0')
         {
         	
         	  if(counter==1)
         	  	   cout<<"CHETAN"<<endl;
         	  else
         	  	   cout<<"UTKARSH"<<endl;
         }
       else
       {
       	  if(counter==0)
       	  	  cout<<"DRAW"<<endl;
       	  else
       	  	    cout<<"CHETAN"<<endl;
       }
    } 
   
    
}