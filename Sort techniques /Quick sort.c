void display(int arr[15], int n) {
	//write your code here..
int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	
}
int partition(int arr[15], int lb, int ub) {
	//write your code here..
	int pivot,down=lb,up=ub,temp;
	pivot=arr[lb];
	while(down<up){
		while(arr[down]<=pivot&&down<ub){
			down++;
		}
		while(arr[up]>pivot){
			up--;
		}
		if(down<up){
			temp=arr[down];
			arr[down]=arr[up];
			arr[up]=temp;
		}
	}
	arr[lb]=arr[up];
	arr[up]=pivot;
	
	return up;
}
void quickSort(int arr[15], int low, int high) {
	//write your code here..
	int j;
	if(low<high){
		j=partition(arr,low,high);
		quickSort(arr,low,j-1);
		quickSort(arr,j+1,high);
	}
}
