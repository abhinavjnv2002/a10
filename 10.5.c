#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    printf("Natural even number : ");

    while(i<=N)
    {
        if(i%2==0)
        printf("%d\t",i);
        i++;
    }
    getch();
}
