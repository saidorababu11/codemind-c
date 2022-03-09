#include<stdio.h>
int main()
{
    int i, j, k, ro;

    scanf("%d", &ro);

  
    for(i = ro; i >= 1; i--)
    {
        for(j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= ro; k++)
        {
            if(i == 1 || i == ro || k == 1 || k == ro)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }       
        }         
        printf("
");   
    }
    return 0;
}