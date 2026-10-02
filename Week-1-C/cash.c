#include <stdio.h>

int main()
{
    int n, ans;

    do
    {
        printf("Change owed: ");
        scanf("%d", &n);
    }
    while(n<0);

    ans=n/25;
    n=n%25;

    ans=ans+(n/10);
    n=n%10;

    ans=ans+(n/5)+(n%5);

    printf("%d\n", ans);
}
