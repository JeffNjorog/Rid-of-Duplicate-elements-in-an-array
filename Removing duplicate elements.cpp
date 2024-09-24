#include<iostream>
using namespace std;
int main()
{
	int n,arr[25],i,j,x;
	cout<<"Enter Array length:"<<endl;
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	cout<<"Original Array:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"After removing Duplicate Elements:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
	
	{
		if (arr[i]==arr[j])
		{
			for(x=j;x<n;x++)
			{
				arr[x]=arr[x+1];
			}
			n--;
		}
		else
		{
			j++;
		}
	}
	}
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<arr[i];
	}
	return 0;
}