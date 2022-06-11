#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int f[50], index[50],i, n, st, len, j, c, k, ind,count=0;
for(i=0;i<50;i++)
f[i]=0;
x:printf("\nEnter the index block: ");
scanf("%d",&ind);
if(f[ind]!=1)
{
printf("\nEnter no of blocks needed and no of files for the index %d on the disk : \n", ind);
scanf("%d",&n);
}
else
{
printf("\t%d index is already allocated \n",ind);
goto x;
}
y: count=0;
for(i=0;i<n;i++)
{
scanf("%d", &index[i]);
if(f[index[i]]==0)
count++;
}
if(count==n)
{
for(j=0;j<n;j++)
f[index[j]]=1;
printf("\tAllocated\n");
printf("File Indexed\n");
for(k=0;k<n;k++)
printf("%d ------->%d : %d\n",ind,index[k],f[index[k]]);
}
else
{
printf("\tFile in the index is already allocated \n");
printf("\nEnter another file indexed : ");
goto y;
}
printf("\nDo you want to enter more file(Yes - 1/No - 0)");
scanf("%d", &c);
if(c==1)
goto x;
else
exit(0);
getch();
}

/*


Enter the index block: 1

Enter no of blocks needed and no of files for the index 1 on the disk :
5 0 3 4 5 6
        Allocated
File Indexed
1 ------->0 : 1
1 ------->3 : 1
1 ------->4 : 1
1 ------->5 : 1
1 ------->6 : 1

Do you want to enter more file(Yes - 1/No - 0)1

Enter the index block: 2

Enter no of blocks needed and no of files for the index 2 on the disk :
4 2 3 5 6
        File in the index is already allocated

Enter another file indexed : 7 8 9 10
        Allocated
File Indexed
2 ------->7 : 1
2 ------->8 : 1
2 ------->9 : 1
2 ------->10 : 1

Do you want to enter more file(Yes - 1/No - 0)0

--------------------------------
Process exited after 49.1 seconds with return value 0
Press any key to continue . . .

*/
