#include<stdio.h>


void insertionSort(int A[], int n)
{
  int j;
  for (j= 1; j<=n-1;j++)
    {  
      int value, hole;
  value = A[j];
  hole = j;
  while (hole > 0 && A[hole - 1] > value)

      {

      A[hole]  = A[hole-1];
      hole = hole -1;
       	}  

  A[hole]    = value ;

 }
} 



int main()


{

  int A[] = {5,4,3,2,1};
  int i;
  insertionSort(A, 5);
  for (i= 0 ; i<5 ; i++)
    {
      printf("%d\t", A[i]);
    } 
  




} 
