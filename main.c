#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a ;
    
    printf("정수를 입력하시오 : ");
    scanf("%d", &a);
    
    if(a<0) {
         a = a * -1;
    }
         
    printf("절대값은 %d 입니다.", a);
    
  system("PAUSE");	
  return 0;
}
