#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);    //aray input
    }

    int mini = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mini)
        {
            mini = a[i];             //minimum bahir kora
        }
    }

    int cnt_frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mini)              //min array er soman hole cnt kora
        {
            cnt_frequency++;
        }
    }

    if (cnt_frequency % 2 != 0)
    {
        printf("Lucky");               //odd kina cehck kora
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}
