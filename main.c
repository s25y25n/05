#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num ;
  int sum = 0 ;
  int i ;
  
  printf("input a number : ");
  scanf("%d" , & num);
  
  for ( i = 0; i <= num ; i++ ) {
      sum = sum + i ;
      }
  
  printf("Result is %d \n", sum);
  
  
  
  
  system("PAUSE");	
  return 0;
}
