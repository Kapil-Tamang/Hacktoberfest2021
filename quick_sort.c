#include<stdio.h>
#include<conio.h>
int n;
int A[10];
int main(){
	int i;
	printf("Enter no of elements \t");
	scanf("%d",&n);
	A[10] = A[n];
	printf("Enter %d numbers \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	quickSort(0,n-1);
	printSorted();
	return 0;
}
void swap(int a, int b){
	int c;
	c=A[a];
	A[a]=A[b];
	A[b]=c;
}
int partition(int p, int r){
	int pivot,q,k;
	pivot = p;
	k=p;
	for(q=p+1;q<=r;q++){
		if(A[q] < A[pivot]){
			k++;
			swap(q,k);
		}
	}
	swap(k,pivot);
	return k;
}
void quickSort(int p, int r){
	int l;
	if(p<r){
		l=partition(p,r);
		quickSort(p,l-1);
		quickSort(l+1,r);
	}
}
void printSorted(){
	int i;
	printf("Sorted Numbers :\t");
	for(i=0;i<n;i++){
		printf("%d \t",A[i]);
	}
}
