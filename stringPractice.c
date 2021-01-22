// Practicing string char *string instead of char string[size]

#include<stdio.h>
#include<stdlib.h>
struct stu
{
	char *firstName;
	int roll;
	char *branch;
};

int main()
{
	struct stu s[3];
	int i, size;
	printf("Enter the number of Students: ");
	scanf("%d",&size);
	getchar(); //Taking the newline from scanf()

	//Taking user inputs
	printf("\n.....Students Details.....\n");
	for(i=0;i<size;i++)
	{
		s[i].firstName=malloc(sizeof(s[i].firstName));
		s[i].branch=malloc(sizeof(s[i].branch));
		if(s[i].firstName==NULL)
		{
			printf("firstName memory not allocated\n");
			return 0;
		}
		if(s[i].branch==NULL)
		{
			printf("branch memory not allocated\n");
			return 0;
		}
		printf("\nEnter Student %d Name: ",i+1 );
		fgets(s[i].firstName, sizeof(s[i].firstName), stdin);
		printf("Enter Student %d Branch: ",i+1 );
		fgets(s[i].branch, sizeof(s[i].branch), stdin);
		printf("Enter Roll number: ");
		scanf("%d",&s[i].roll);
		getchar();// Added getchar() to avoid error with fgets after scanf() to take the newline generated from scanf
		
	}
	//Displaying Inputs
	printf("\n\n.....Displaying.....");
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d Name: %s",i+1,s[i].firstName);
		printf("Student %d Roll: %d",i+1,s[i].roll);
		printf("\nStudent %d Branch: %s",i+1,s[i].branch);

	}
	printf("\n");
}
