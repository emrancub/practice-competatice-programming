#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=1;i<=15;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
