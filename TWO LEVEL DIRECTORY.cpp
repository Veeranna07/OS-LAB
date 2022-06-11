#include<stdio.h>
#include<conio.h>
struct st
{
char dname[10];
char sdname[10][10];
char fname[10][10][10];
int ds,sds[10];
}dir[10];

int main()
{
   int i,j,k,n;
   printf("\nEnter number of directories:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("\nEnter directory %d names:",i+1);
	  scanf("%s",&dir[i].dname);
	  printf("enter size of directories:");
	  scanf("%d",&dir[i].ds);
	  
	  for(j=0;j<dir[i].ds;j++)
	  {
	  printf("\nEnter subdirectory name and size:");
	  scanf("%s",&dir[i].sdname[j]);
	  scanf("%d",&dir[i].sds[j]);
	  
	  for(k=0;k<dir[i].sds[j];k++)
	  {
	     printf("\nEnter file name:");
		 scanf("%s",&dir[i].fname[j][k]);
	   }
	 }
	}
	
      printf("\ndirname\t\tsize\tsubdirname\tsize\tfiles");
	  printf("\n******************************************************\n");
	  for(i=0;i<n;i++)
	  {
	     printf("%s\t\t%d",dir[i].dname,dir[i].ds);
		 for(j=0;j<dir[i].ds;j++)
		 {
		    printf("\t%s\t\t%d\t",dir[i].sdname[j],dir[i].sds[j]);
			for(k=0;k<dir[i].sds[j];k++)
			printf("%s\t",dir[i].fname[j][k]);
			printf("\n\t\t");
		}
		  printf("\n");
	 }
}

/*


Enter number of directories:1

Enter directory 1 names:GCTC
enter size of directories:2

Enter subdirectory name and size:B.Tech 2

Enter file name:CSE

Enter file name:CSE-EA

Enter subdirectory name and size:pharmacy 2

Enter file name:B_pharm

Enter file name:D_pharm

dirname         size    subdirname      size    files
******************************************************
GCTC            2       B.Tech          2       CSE     CSE-EA
                        pharmacy        2       B_pharm D_pharm


--------------------------------
Process exited after 37.68 seconds with return value 0
Press any key to continue . . .


*/
