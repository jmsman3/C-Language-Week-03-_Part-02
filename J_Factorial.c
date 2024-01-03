// Online C compiler to run C program online
#include <stdio.h>
long long int fun(long long int n)
{
    if (n == 0)
        return 1;

    long long int ans = fun(n - 1);
    return ans * n;
}

int main()
{

    long long int n;
    scanf("%lld", &n);
     for(int i =0; i<=n; i++)
     {
        long long int ans = (n-1);
        printf("%lld" , ans*n);
     }

    return 0;
}