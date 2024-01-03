// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>

int fun(int ar[], int n, int i)
{

    if (i == n)
    {
        return INT_MIN;
    }
    int mx = fun(ar, n, i + 1);
    if (ar[i] > mx)
    {
        return ar[i];
    }
    else
    {
        return mx;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int mx = fun(ar, n, 0);
    printf("%d\n", mx);
    return 0;
}