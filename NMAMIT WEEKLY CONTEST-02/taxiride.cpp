#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int d,oc,of,od,cs,cb,cm,cd;
    cin>>d;
    cin>>oc>>of>>od;
    cin>>cs>>cb>>cm>>cd;
    double t_amount1;//Total cost by travelling through online taxi
    double t_amount2;//Total cost by travelling through ofline taxi
    t_amount1=oc;
    if(d>of)
    {
    	 t_amount1+=((d-of)*od);
    }
    t_amount2=cb+((d/double(cs))*cm)+(cd*d);
    if(t_amount1<=t_amount2)
    	  cout<<"ONLINE TAXI";
    else
    	  cout<<"Classic Taxi";
    
}