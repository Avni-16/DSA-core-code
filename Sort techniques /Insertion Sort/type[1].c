#include<stdio.h>
void main() {
	int a[20], i, n, j, temp;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for (i=0;i<n;i++ ) { // Complete the code in for
		printf("Enter element for a[%d] : ", i);
		scanf("%d",&a[i] ); // Complete the statement
	}
	printf("Before sorting the elements in the array are\n");
	for (i=0;i<n;i++ ) { // Complete the code in for
		printf("Value of a[%d] = %d\n", i,a[i]); // Complete the statement
	}
	for (i=1;i<n;i++ ) { // Complete the code in for
		temp = a[i];
		j=i-1;// Complete the statement
		while(j>=0&&a[j]>temp ){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}// Complete the code in for
			 // Complete the condition part
					 // Complete the statements to swap elements
			
		
	
	printf("After sorting the elements in the array are\n");
	for (i=0;i<n;i++ ) { // Complete the code in for
		printf("Value of a[%d] = %d\n", i,a[i]); // Complete the statement
	}
}
