#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct library
{
    char Name[100];
    int No;
    char Issue[100];
    int Status;
} a[50];
int main()
{
    int x,n=1,c,y=1,i,f=1;
    char na[100];
    do
    {
        printf("Enter your choice:\n1,Add Books\n2,View Books\n3,Issue Books\n4,View Issued Books\n5,Return Books\n");
       scanf("%d",&x);
       switch(x)
		{
		case 1: // add books
			printf("Enter the book name:");
			scanf("%s%c",a[n].Name);
			a[n].No=n;
			strcpy(a[n].Issue,"-");
			a[n].Status=1;
			n++;
			printf("Books added successfully\n");
			break;
			
		case 2: //view Book
		    printf("No\tName\tIssue\tStatus\n");
		    for(i=1;i<n;i++)
		    printf("%d\t%s\t%s\t%s\n",a[i].No,a[i].Name,a[i].Issue,a[i].Status?"Available":"Not Available ");
		    break;

		case 3: //issue
            printf("Enter the book no:");
            scanf("%d",&y);
            if(a[y].Status==1)
            {
                printf("Enter issuer name:\n");
                scanf("%s",na);
                strcpy(a[y].Issue,na);
            a[y].Status=0;
            }
            else
                printf("Books not available\n");
                
		case 4: //view issued Books
		    printf("No\tName\tIssue\n");
		    for(i=1;i<n;i++)
		    if(a[i].Status==0)
		    printf("%d\t%s\t%s\n",a[i].No,a[i].Name,a[i].Issue);
		    else
		    f=0;
		    if(f==0)
		    printf("book Issued \n");
		    break;
		 case 5: //return Books
		    printf("Enter Book No:");
		    scanf("%d",&y);
		    strcpy(a[y].Issue,"-");
		  a[y].Status=1;
		     break;
		}    
        printf("Do you want to continue:1/0");
        scanf("%d",&c);
	}while(c==1);
}





