//Shell Sort
#include <iostrem.h>

void display(int a[], int n){
  for(int i=0; i<n; i++)
      cout<<a[i]<<" ";
}

void shellSort(int a[], int n){
	int j;
		for(int space=n/2; space>0; space/=2){
			for(int i=space; i<n; i++){
				int temp=a[i];
					for(j=i; j>=space && temp<a[j - space]; j-=space)
						a[j]=a[j - space];
				a[j]=temp;
			}
		}
}

int main(){
	int a[10],n;
		cout<<"Enter the size of the array";
		cin>>n;
		cout<<"\n\nEnter the array";
			for(int i=0; i<n; i++)
				cin>>a[i];
		cout<<"\n\n\t\t\tShell Sort";
		cout<<"\n\t\t\t__________";
		cout<<"\n\nOriginal array is \n";
		display(a,n);
		shellSort(a,n);
		cout<<"\n\nSorted array is \n";
		display(a,n);
	return 0;
}
