#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    i=N;
    printf("Natural number in reverse: ");

    while(i>=1)
    {
        printf("%d\t",i);
        i--;
    }
    getch();
}
