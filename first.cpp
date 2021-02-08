#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n=s.length();
	map<char,int>m;
	for(int i=0;i<n;i++)
	{
		m[s[i]]=0;
	}
	for(int i=0;i<n;i++)
	{
		m[s[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(m[s[i]]==2)
		{
			s[i]='Z';
		}
		if(m[s[i]]>=3)
		{
			s[i]='X';
		}
	}
	cout<<s;
}
