
#include <stdio.h>
int main(){
    int a,i,j,k;
    printf("enter the no.of rows");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=a;j>i;j--)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++){
              printf("%2d",k);

        }
        printf("\n");
    }
    
}