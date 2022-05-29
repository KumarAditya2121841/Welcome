#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int minc(int n,int tar,vector<int>& coin)
{
	if(tar==0) return 1 ;
	
	int take = INT_MAX;
	
   if(coin[n]<tar)
   	take = 1 + minc(n,tar-coin[n],coin);
   
    int nt = 0+minc(n-1,tar,coin);
   
   
      return min(nt,take);
	
}



int main()
{
	vector<int> coins;
	coins.push_back(9);
	coins.push_back(6);
	coins.push_back(5);
	coins.push_back(1);
	int target = 11;
	
	int n = coins.size();
	int res = minc(n-1,target,coins);
}
