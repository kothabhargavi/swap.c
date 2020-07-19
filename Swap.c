#include<stdio.h>
int main()
{
int a,b;
printf("Enter a,b values");
Scanf("%d%d",&a,&b);
Printf("\n Before swapping");
Printf("\n A=%d \n B=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n After swapping");
printf("\n A=%d \n B=%d",a,b);
return 0;
}
