//program for calculator using switch case statement with macro substitution
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SQ(x) ((x)*(x))
#define CUBE(x) (SQ(x)*(x))

int main()
{
	int user,num1,num2,sq,cb,i,fac,n,p,r;
	float a,b,div;
	char ans;//to store Y/N answer at the end to contiue the program or not
	start://to loop through the program again
	printf("\tCalculator by imdeadlock\n");
	printf("\tPress 1 for Addition\n\tPress 2 for Substraction\n\tPress 3 for Multiplication\n\tPress 4 for Divison\n\tPress 5 for Square\n\tPress 6 for Cube\n\tPress 7 for Factorial\n\tPress 8 To check the power\n\tPress 9 to exit the program\n");
	scanf("%d", &user);
	switch(user)
	{
		case 1 : 
		printf("Enter Any Two Number:\n");
		scanf("%d\n%d", &num1,&num2);
		printf("The sum of %d+%d is : %d", num1,num2,(num1+num2));
		break;
		case 2 :
		printf("Enter Any Two Number:\n");
		scanf("%d\n%d", &num1,&num2);
		printf("The difference of %d-%d is : %d", num1,num2,(num1-num2));
		break;
		case 3 :
		printf("Enter Any Two Number:\n");
		scanf("%d\n%d", &num1,&num2);
		printf("The product of %d*%d is : %d", num1,num2,(num1*num2));
		break;
		case 4 :
		printf("Enter Any Two Number:\n");
		scanf("%f\n%f", &a,&b);
		div=a/b;
		if(b==0)
		printf("Number cannot be divided by 0");
		else
		printf("The Divison of %.2f/%.2f is : %.2f", a,b,div);
		break;
		case 5 :
		printf("Enter a number:\n");
		scanf("%d", &num1);
		sq=SQ(num1);
		printf("Square of %d is : %d", num1,sq);
		break;
		case 6 :
		printf("Enter a number:\n");
		scanf("%d", &num1);
		cb=CUBE(num1);
		printf("Square of %d is : %d", num1,cb);
		break;
		case 7:
		printf("Enter a number :\n");
		scanf("%d", &num1);
		for(i=1;i<=num1;i++)
		{
			fac=fac*i;
		}
		printf("Factorial of %d is : %d", num1,fac);
		break;
		case 8:
			printf("Enter the number:\n");
			scanf("%d",&n);
			printf("Enter the power:\n");
			scanf("%d",&p);
			r=pow(n,p);//power(Number,Power) 2,3=8
			printf("Result is %d\n",r);
			break;
		case 9:
		goto end;
		break;	
		default:
			printf("Enter between the Range\n");
	}
	printf("\nDo you want to continue using the calculator(Y/N): \n");
	scanf(" %c", &ans);
	if(ans=='Y'||ans=='y')
	{
		goto start;
	}
	else
	printf("Thank you for using the program\n");
	end:
	getch();
	return 0;
}
