#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,s,N;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    while(i<=N)
    {
        s=i*i;
        printf("%d\t",s);
        i++;
    }
    getch();
}
