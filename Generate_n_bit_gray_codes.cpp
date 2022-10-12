#include <bits/stdc++.h>
using namespace std;

void GreyCode(int n)
{
	for (int i = 0; i < (1 << n); i++)
	{
		int val = (i ^ (i >> 1));
		
		bitset<32> r(val);
		
		string s = r.to_string();
		cout << s.substr(32 - n) << " ";
	}
}

int main()
{
	int n;
	n = 4;

	GreyCode(n);
	
	return 0;
}
