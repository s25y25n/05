#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a ;
    
    printf("������ �Է��Ͻÿ� : ");
    scanf("%d", &a);
    
    if(a<0) {
         a = a * -1;
    }
         
    printf("���밪�� %d �Դϴ�.", a);
    
  system("PAUSE");	
  return 0;
}
