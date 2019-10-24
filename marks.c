#include <stdio.h>

int main()
{
int sub1,sub2,sub3,sub4;
float avg;
char name[10];

printf("Enter your name :");
scanf("%s",&name);

printf("Enter your marks for subjects");
scanf("%d %d %d %d",&sub1,&sub2,&sub3,&sub4);

avg=(sub1+sub2+sub3+sub4)/4.00;

if (avg<=100 && avg>=75)
	printf("Your grade is 'A'\n");
else if (avg>=60 && avg<75)
	printf("Your grade is 'B'\n");
else if (avg>=50 && avg<60)
	printf("Your grade is 'C'\n");
else if (avg>=35 && avg<50)
	printf("Your grade is 'S'\n");
else
	printf("Your grade is 'F'\n");


return 0;
}

