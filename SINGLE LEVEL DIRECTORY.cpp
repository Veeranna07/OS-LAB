// Program to simulate single level directory 
#include<stdio.h>
#include<string.h>
int main()
{
int nf=0,i=0,j=0,ch;
char mdname[10],fname[10][10],name[10];
printf("Enter the directory name:");
scanf("%s",mdname);
printf("\nEnter the number of files:");
scanf("%d",&nf);
do
{
printf("Enter file name to be created:");
scanf("%s",name);
for(i=0;i<nf;i++)
{
if(!strcmp(name,fname[i]))
break;
}
if(i==nf)
{
strcpy(fname[j++],name);
nf++;
}
else
printf("\nThere is already %s\n",name);
printf("\nDo you want to enter another file(yes - 1 or no - 0):");
scanf("%d",&ch);
}
while(ch==1);
printf("\nDirectory name is:%s\n",mdname);
printf("\nFiles names are:");
for(i=0;i<j;i++)
printf("\n%s",fname[i]);
}

/*

Enter the directory name:GCTC

Enter the number of files:3
Enter file name to be created:CSE

Do you want to enter another file(yes - 1 or no - 0):1
Enter file name to be created:EA

Do you want to enter another file(yes - 1 or no - 0):1
Enter file name to be created:EA

There is already EA

Do you want to enter another file(yes - 1 or no - 0):1
Enter file name to be created:B.pharm

Do you want to enter another file(yes - 1 or no - 0):0

Directory name is:GCTC

Files names are:
CSE
EA
B.pharm
--------------------------------
Process exited after 71.03 seconds with return value 0
Press any key to continue . . .


*/
