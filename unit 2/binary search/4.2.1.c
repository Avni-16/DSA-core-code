#include <stdio.h>
int main(){
	int l=0,r,T,n,i,j,temp;
	int a[100],flag=0;
	int m;

	scanf("%d",&n);
	for(i=0;i<n;i++)  
		scanf("%d",&a[i]);
	scanf("%d",&T);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	r=n-1;

	while(l<=r){
		m=l+(r-l)/2;
		if(a[m]==T){
			flag=1;
			break;
		}
		else if(a[m]<T)
			l=m+1;
		else
			r=m-1;
	}

	if(flag==1){
		printf("Found");
	}
	else{
		printf("Not found");
	}

	return 0;
}

