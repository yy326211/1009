#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[1000]={0};
	int n;
	a[0]=2;
	cin>>n;
	for(int j=n-1;j>0;j--)
	{
       for(int i=0;i<1000;i++)
			a[i]=a[i]*2;
	   for(int i=0;i<1000;i++)
			if(a[i]>=10)
				{
					a[i]=a[i]-10;
						a[i+1]=a[i+1]+1;
						if(a[i+1]==10)
						{
							a[i+1]=0;
							a[i+2]=a[i+2]+1;
						}
			}
	}

        int i=999;
		while(a[i]==0)
			i--;
		for(;i>=0;i--)
		cout<<a[i];
	system("pause");
	return 0;
}