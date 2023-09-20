#include<stdio.h>

int main()
{
    int i,n;
    printf("ENter the value of n ");
    scanf("%d",&n);
    do
    {
        printf("The value is %d \n",i);
      // i++;
        if(i==6)
        {
            break;
        }
        i++;
    }
    while(i<=n);

    return 0;
}
