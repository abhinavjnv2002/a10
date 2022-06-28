#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",i);
        i++;
    }
    getch();
}
