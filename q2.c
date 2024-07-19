#include<stdio.h>
main(){
	int ldigit,fdigit,sum,num,num2;
	sum=0;
	printf("what is the number :");
	scanf("%d",&num);
	num2=num;
	ldigit=num2%10;
	while(num2>=10){
		num2=num2/10;
	}
	 fdigit=num2;
	sum=fdigit+ldigit;
	printf("sum of both the digits is :%d",sum);
}


	

