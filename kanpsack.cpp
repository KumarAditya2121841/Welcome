#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int loot(int n,int w,int val[3],int wei[])
{
	
	if(n==0)
	{
		if(wei[0]<w) return val[0];
	}
	if(n==0) return 0;
	
	
	int nt = 0 + loot(n-1,w,val,wei);
	int tk = INT_MIN;
	if(wei[n-1]<w)
	{
		tk = val[n-1]+loot(n-1,w-wei[n-1],val,wei);
	}
	
	return max(nt,tk);
	
	
	
	
	
	
}
int main()
{
	int vn;
	cin>>vn;
	int val[vn],wei[vn];
   for(int i=0;i<vn;i++)
   {
	cin>>val[i];
         }
         
     for(int i=0;i<vn;i++)
   {
	cin>>wei[i];
         }    
		 
	
	int w = 50;
	int result= loot(vn,w,val,wei);
	cout<<result;
	
		  
	}
