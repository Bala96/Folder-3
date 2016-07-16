// Insertion Sort (Accending order)
#include <iostream>

void display(int a[], int n){
  for(int i=0; i<n; i++)
      cout<<a[i]<<" ";
}

void insertionSort(int a[], int n){   
	int temp, loc;
		for(int i=1; i<n; i++){
			temp=a[i];
			loc=i-1;   
				while(temp<a[loc] && loc>=0){  
					a[loc+1]=a[loc];
					loc--;
				}
			a[loc+1]=temp;
		}
}

int main(){
	int a[10],n;
		cout<<"\n\nEnter the size of the array";
		cin>>n;
		cout<<"\n\nEnter the array";
			for(int i=0; i<n; i++)
				cin>>a[i];
		cout<<"\n\n\t\t\tInsertion Sort";
		cout<<"\n\t\t\t______________";
		cout<<"\n\nThe original array is \n";
		display(a,n);
		insertionSort(a,n);
		cout<<"\n\nThe sorted array is \n";
		display(a,n);
	return 0;
}
