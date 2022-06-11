#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int f[50], p,i, st, len, j, c, k, a;
for(i=0;i<50;i++)
f[i]=0;
printf("\nEnter how many blocks already allocated: ");
scanf("%d",&p);
printf("\nEnter blocks already allocated: ");
for(i=0;i<p;i++)
{
scanf("%d",&a);
f[a]=1;
}
x: printf("\nEnter index starting block and length: ");
scanf("%d%d", &st,&len);
k=len;
if(f[st]==0)
{
for(j=st;j<(st+k);j++)
{
if(f[j]==0)
{
f[j]=1;
printf("\t%d ------->%d\n",j,f[j]);
}
else
{
printf("\t%d Block is already allocated \n",j);
k++;
}
}
}
else
printf("\n%d starting block is already allocated \n",st);
printf("\nDo you want to enter more file(Yes - 1/No - 0)");
scanf("%d", &c);
if(c==1)
goto x;
else
exit(0);
getch();
}

/*


Enter how many blocks already allocated: 1

Enter blocks already allocated: 1

Enter index starting block and length: 2 4
        2 ------->1
        3 ------->1
        4 ------->1
        5 ------->1

Do you want to enter more file(Yes - 1/No - 0)1

Enter index starting block and length: 2 4

2 starting block is already allocated

Do you want to enter more file(Yes - 1/No - 0)0

--------------------------------
Process exited after 15.07 seconds with return value 0
Press any key to continue . . .

*/
