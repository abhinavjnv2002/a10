#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    printf("Natural odd number : ");

    while(i<=N)
    {
        if(i%2==0)
            printf(" ");
        else
        printf("%d\t",i);
        i++;
    }
    getch();
}
