#include<stdio.h>
void main() {
	int a[20], i, n, j, temp, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Enter element for a[%d] : ",i);
		scanf("%d", &a[i]);
	}
	// write the for loop to read array elements
	
	// write the for loop to display array elements before sorting
	printf("Before sorting the elements in the array are\n");
	for (i=0;i<n;i++){
	printf("Value of a[%d] = %d\n", i,a[i]);
	}
	// write the code to sort elements
	for(i=1;i<n;i++){
	temp = a[i];
	j = i-1;
	
	// write the for loop to display array elements after sorting
	while(j>=0&&a[j]>temp){
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;

	}
	printf("After sorting the elements in the array are\n");
	for(i=0;i<n;i++){
	printf("Value of a[%d] = %d\n",i,a[i]);
	}
	
	
	
}
