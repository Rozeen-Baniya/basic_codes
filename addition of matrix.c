
#include<stdio.h>
 
int main()
    {
    	
   int a[10][10], b[10][10], sum[10][10], i, j,k;
 
   printf("\nEnter First Matrix : \n");
   for (i = 0; i < 3; i++) 
   {
      for (j = 0; j < 3; j++)
	   {
         scanf("%d", &a[i][j]);
      }
      printf("\n");
   }
 
   printf("\nEnter Second Matrix:\n");
   for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	   {
         scanf("%d", &b[i][j]);
      }
      printf("\n");
   }
 
   printf("The First Matrix is: \n");
   for (i = 0; i < 3; i++) 
   {
      for (j = 0; j < 3; j++)
	   {
         printf(" %d \t", a[i][j]);
      }
      printf("\n");
   }
 
   printf("The Second Matrix is : \n");
   for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++) 
	  {
         printf(" %d \t", b[i][j]);
      }
      printf("\n");
   }
 
   
// adding two matrices
  for (i = 0; i < 3; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      sum[i][j] = a[i][j] + b[i][j];
    }
}
  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < 3; ++i)
  {
    for (j = 0; j < 3; ++j)
	 {
      printf("%d   ", sum[i][j]);
      if (j == 3 - 1)  
	  {
        printf("\n\n");
      }
  }
}
   return 0;
}
