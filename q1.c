#include<stdio.h>
main(){
	int x,y,count=0;
	printf("what is the number :");
	scanf("%d",&x);
	while(x>0){
	x=x/10;
	count++;
	}
	printf("total number of digit is : %d",count);
	
}
