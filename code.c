#include <stdio.h>
int sum (int a , int b)
{ int c;
 c=a+b;
 return c;
}

int main() {
    int a,b,c;
    printf("please enter 2 integers\n");
    scanf("%d %d",&a,&b);
    c= sum(a,b);
    printf("sum of %d and %d is %d",a,b,c);
    
    
    return 0;
}
