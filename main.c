#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c;
    int num = 0 ;
    
    printf("input a string : ");
    
    while ((c = getchar()) != '\n') {
          if (c >= '0' && c <= '9' ) {
                num += 1 ;
          }
}

printf("The number of digits is %d", num);

    
  system("PAUSE");	
  return 0;
}
