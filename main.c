#include<stdio.h>
#include "func.h"
   
int main()  
{  
    int a, b;  
  
    printf("Enter values for two numbers -\n");  
    scanf("%d%d", &a, &b);  
    printf("%d + %d = %d\n", a, b, add(a, b));  
    printf("%d + %d = %d\n", a, b, (a-b));
    return 0;  
}  
