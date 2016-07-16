// Heap sort
#include <iostream.h>
void display(int a[], int n){
  for(int i=0; i<n; i++)
      cout<<a[i]<<" ";
}

void maxHeap(int *a, int i, int n){
	int j, temp;
		temp=a[i];
		j=2*i;
			while(j<=n){
					if(j<n && a[j+1]>a[j])
						j=j+1;
					if(temp >a[j])
						break;
					else if(temp<=a[j]){
						a[j/2]=a[j];
						j=2*j;
					}
			}
		a[j/2]=temp;
}

void heapSort(int *a, int n){
	int temp;
		for(int i=n; i>=2; i--){
			temp=a[i];
			a[i]=a[1];
			a[1]=temp;
			maxHeap(a,1,i-1);
		}

}

void build(int *a, int n){
	for(int i=n/2; i>=1; i--)
		maxHeap(a,i,n);
}

int main(){
	int n,x,a[10];
		cout<<"Enter the size of the array";
		cin>>n;
		cout<<"\n\nEnter the array";
			for(int i=0; i<n; i++)
				cin>>a[i];
		cout<<"\n\n\t\t\tHeap Sort";
		cout<<"\n\t\t\t_________";
		cout<<"\n\nThe original array is \n";
		display(a,n);
		build(a,n);
		heapSort(a,n);
		cout<<"\n\nThe sorted array is \n";
		display(a,n);
	return 0;
}
