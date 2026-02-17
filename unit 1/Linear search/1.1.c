#include<stdio.h>
int main(){
int i,n,key;
int a[100];
	int found = 0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
	scanf("%d", &a[i]);
}
	scanf("%d",&key);
for(i=0;i<n;i++){
	if(a[i] == key){
		printf("Found");
		return 0;
		}
	}

	printf("Not found");
	return 0;
}

 
