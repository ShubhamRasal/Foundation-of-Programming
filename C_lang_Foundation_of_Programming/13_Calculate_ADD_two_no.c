//write a program which accept two numbers and print addition between that numbers.
//INPUT: 10 3
//OUTPUT: 13

#include<stdio.h>

int main()
{
	int iNo1=0,iNo2=0;
	int iAdd=0;
	
	//accept two Numbers
	printf("Enter Two Numbers:");
	scanf("%d %d",&iNo1,&iNo2);
	
	//calculate Addition
	iAdd= iNo1+iNo2;

	printf("OUTPUT: Addition is %d. [%d + %d = %d]\n",iAdd,iNo1,iNo2,iAdd);

	return 0;
}

