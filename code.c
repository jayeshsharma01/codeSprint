#include <stdio.h>
int sum (int a , int b)
{ int c;
 c=a+b;
 return c;
}

int main() {
    int a,b;
    printf("please enter 2 integers\n");
    scanf("%d %d",&a,&b);
    printf("sum of %d and %d is %d",a,b,sum(a,b));
    
    
    return 0;
}
