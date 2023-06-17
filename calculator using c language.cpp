#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	printf("Enter Your Choice:\n");
	printf("Press 1 for addition\n Press 2 for Subtraction \n Press 3 for Multiplication \n Press 4 for Division \n Press 5 for Square\n");
	scanf("%d",&a);
	if (a==1)
	{
		printf("Enter Your Number\n");
		scanf("%d\n%d",&b,&c);
		d=b+c;
		printf("%d",d);
	}
	else if (a==2)
	{
		printf("Enter Your Number\n");
		scanf("%d\n%d",&b,&c);
		d=b-c;
		printf("%d",d);
		
	}
	else if (a==3)
	{
		printf("Enter Your Number\n");
		scanf("%d\n%d",&b,&c);
		d=b*c;
		printf("%d",d);
	} 
	else if(a==4)
	{
		printf("Enter Your Number\n");
		scanf("%d\n%d",&b,&c);
		d=b/c;
		printf("%d",d);
	}
	else if (a==5)
	{
		printf("Enter Your Number\n");
		scanf("%d\n",&b);
		d=b*b;
		printf("%d",d);
	}
	else
	{
		printf("enter a valid input");
	}
	return 0;
}






//***************************************WRITTEN BY SIDDHARTH PEEYUSH **************************************
