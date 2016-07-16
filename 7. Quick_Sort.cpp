//Quick Sort

#include <iostream.h>

void display(int a[], int n){
  for(int i=0; i<n; i++)
      cout<<a[i]<<" ";
}

void quickSort(int a[], int first, int last){
	int x,temp,i,j;
		if(first<last){
			x=a[first];
			i=first;
			j=last;
				while(i<j){
					while(a[i]<=x && i<j)
						i++;
					while(a[j]>x && i<=j)
						j--;
					if(i<=j){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			temp=[i];
			a[j]=a[first];
			a[first]=temp;
			quickSort(a,first,j-1);
			quickSort(a,j+1,last);
		}
}

int main(){
	int a[10],n,first,last;
		cout<<"Enter the size";
		cin>>n;
		cout<<"\n\nEnter the array";
			for(int i=0;i<n;i++)
				cin>>a[i];
	first=0;
	last=n-1;
		cout<<"\n\t\t\tQuick Sort";
		cout<<"\n\t\t\t__________";
		cout<<"\n\nOriginal array is \n";
		display(a,n);
		quickSort(a,first,last);
		cout<<"\n\nSorted array is \n";
		display(a,n);
	return 0;
}
