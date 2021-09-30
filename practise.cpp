#include<iostream>
using namespace std;

int main(){
	int arr[10];
	int i,max,temp,n;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> arr[i];
	}
	for(i=0;i<n;i++){
		int j,curr=0;
		for(j=i;j<n;j++){
			curr += arr[j];
			cout<<curr<<endl;
		}
	}
}
	
