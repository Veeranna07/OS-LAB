#include<stdio.h>
#include<conio.h>
int main()
{
int f[50], i, st, len, j, c, k, count = 0;
for(i=0;i<50;i++)
f[i]=0;

x: count=0;
printf("\nEnter starting block and length of files: ");
scanf("%d%d", &st,&len);
for(k=st;k<(st+len);k++)
if(f[k]==0)
count++;
if(len==count)
{
for(j=st;j<(st+len);j++)
if(f[j]==0)
{
f[j]=1;
printf("%d--> %d\n",j,f[j]);
}
if(j!=(st+len-1))
printf("\n\tThe file is allocated to disk\n");
}
else
printf("\n\tThe file is not allocated \n");
printf("\nDo you want to enter more file(Yes - 1/No - 0)");
scanf("%d", &c);
if(c==1)
goto x;
getch();
}

/*


Enter starting block and length of files: 1 3
1--> 1
2--> 1
3--> 1

        The file is allocated to disk

Do you want to enter more file(Yes - 1/No - 0)1

Enter starting block and length of files: 5 2
5--> 1
6--> 1

        The file is allocated to disk

Do you want to enter more file(Yes - 1/No - 0)1

Enter starting block and length of files: 4 2

        The file is not allocated

Do you want to enter more file(Yes - 1/No - 0)0

--------------------------------
Process exited after 15.59 seconds with return value 0
Press any key to continue . . .


*/
