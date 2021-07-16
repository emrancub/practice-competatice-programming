#include<stdio.h>

int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A>B)
    {
        if(A>C)
        {
            printf("%d is bigger number",A);
        }
        else
        {
            printf("%d is bigger number",C);
        }
    }
    else{
        if(B>C)
        {
            printf("%d is bigger number",B);
        }
        else
        {
            printf("%d is bigger number",C);
        }
    }
    return 0;
}
