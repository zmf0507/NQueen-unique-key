#include<stdio.h>
#include<math.h>
 
int stack[100], count=0;
  int n, i, j, ch, coun=0;
int key, turn=0;
 
//function for printing the solution
void print(int n)
{
 int i,j;

 
 for(i=1;i<=n;++i)
  printf("\t%d",i);
 
 for(i=1;i<=n;++i)
 {
  printf("\n\n%d",i);
  for(j=1;j<=n;++j) //for nxn board
  {
   if(stack[i]==j)
    printf("\tQ"); //queen at i,j position
   else
    printf("\t-"); //empty slot
  }
 }
}
 
 
 
int safe(int row,int column)
{
 int i;
 for(i=1;i<=row-1;++i)
 {

  if(stack[i]==column)
 return 0;
             
   if(abs(stack[i]-column)==abs(i-row))
    return 0;
 }
 
 return 1; //no conflicts
}
 

void nqueen(int row,int n)
{
 int column;
 for(column=1;column<=n;++column)
 {
  if(safe(row,column))   //if place() function returns 1 (true)
  {
   stack[row]=column; //
   if(row==n)
   {
   	turn++;
   	if(key==turn)
   	{
   		printf("\nsolution for the key = %d \n\n:",key);
   	print(n);
   	return;
   	break;
   }
   }
   else //try queen with next position
    nqueen(row+1,n);
  }
 }
}

void printone(int n) {
 	int i, j;
 	coun=coun+1;
 	if(coun==1)
 	{
 
 for(i=1;i<=n;++i)
  printf("\t%d",i);
 
 for(i=1;i<=n;++i)
 {
  printf("\n\n%d",i);
  for(j=1;j<=n;++j) //for nxn board
  {
   if(stack[i]==j)
    printf("\tQ"); //queen at i,j position
   else
    printf("\t-"); //empty slot
  }
 }
	 }
	 else
	 {
	 	
	 }
 }

int main()
{

 int coun=0;
 void queen(int row,int n);
 
 printf(" - Solutions for N Queens Problem -");
 printf("\n\nEnter number of Queens:");
 scanf("%d",&n);
 while(key>=0)
 {
 	turn=0;
  printf("\n\nenter any key to generate a unique solution of nqueens problem\n");
  scanf("%d",&key);
  nqueen(1,n);
}
 return 0;
}

