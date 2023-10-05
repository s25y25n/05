#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 32 ;
    int num ;
    int trial = 0;
    
    do
    {
        //1. input
        printf("Guess a number :");
        scanf("%d", &num);
        
        //2. decision low high
        if(num < answer)
          printf("low!\n");
        else if(num > answer)
          printf("high!\n");
        
        trial += 1;
    } while(num != answer);
    
    printf("Congratulation! trial : %d \n", trial);

  system("PAUSE");	
  return 0;
}
