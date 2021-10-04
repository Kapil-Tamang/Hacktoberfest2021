#include<iostream>
using namespace std;

int main()
{
	int n,i,sum=0;
	cin>> n;
	int arr[n];
	for(i=0;i<=n-1;i++)
	{
		cin>> arr[i];
	}		
	for(i=0;i<=n-1;i++)
	{
		sum+=arr[i];
	}
	float avg=(float)sum/n;
	
	cout<< The sum of the array is<< sum<< and the average is<< avg;
	return 0;
}
