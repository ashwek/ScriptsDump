#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n){

	int flag = 1, temp, i = 0;
	
	while(flag!=0 && i<n){
		
		flag = 0;
		
		for(int j=0; j<(n-1); j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
	}
}

void Print(int Arr[], int n){
	for(int i=0; i<n; i++){
		cout<<Arr[i] <<", ";
	}
}
int main(){

	int Arr[] = {10,9,8,7,6,5,4,3,2,1}, n=10;
	
	cout<<"\nOrignal Array = ";
	Print(Arr, n);
	
	bubble_sort(Arr, n);
	
	cout<<"\n Sorted Array = ";
	Print(Arr, n);
	
	return 0;
}
