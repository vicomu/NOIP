#include <iostream>
using namespace std;
bool sn(int n)
{
	if(n<2)
		return false;
	for	(int i=2;i*i<=n;i++)
	{	
			if(n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		if(sn(i))
		{
			if(sn(n-i))
			{
				cout<<i<<" "<<n-i;
				return 0;
			}
		}
	}
	return 0;
}

