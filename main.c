#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a ;
    
    printf("정수 하나를 입력하세요 : ");
    scanf("%i" , &a);
    
    if(a < 0) {
         printf("음수입니다\n");
         } 
    else if (a > 0) {
         printf("양수입니다\n");
         }
    else {
         printf("0\n");
         } 
  system("PAUSE");	
  return 0;
}
