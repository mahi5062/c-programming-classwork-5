#include<stdio.h>
int main()
{
	int rollno,mark1,mark2,mark3,total,percentage;
	char name[50],division[30];
	
	printf("enter the student roll number");
	scanf("%d",&rollno);
	printf("enter student name");
	scanf("%c",&name[50]);
	printf("enter marks of physics,chemistry and computer");
	scanf("%d,%d,%d",&mark1,&mark2,&mark3);
	
    total = mark1 + mark2 + mark3;
    percentage = (total/300)*100;
    printf("Roll Number: %d\n",rollno);
    printf("Name: %s\n", name);
    printf("Marks: %d %d %d\n",mark1,mark2,mark3);
    printf("total marks =%d\n",total);
    printf("percentage =%d\n",percentage);
    
    if (percentage >= 70) 
	{
        strcpy(division, "First");
    } else if (percentage >= 60) 
	{
        strcpy(division, "Second");
    } else if (percentage >= 50) 
	{
        strcpy(division, "Third");
    } else 
	{
        strcpy(division, "Fail");
    }
    
    printf("divison =\n",divison[30]);
}
