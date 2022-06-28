#include<stdio.h>
#include<conio.h>
int main()
{
    int i,s,N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    i=N;

    while(i>=1)
    {
        s=i*i;
        printf("%d\t",s);
        i--;
    }
    getch();
}
