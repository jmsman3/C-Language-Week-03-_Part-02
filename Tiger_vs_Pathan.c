// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int p;
    scanf("%d", &p);
    for (int k = 0; k < p; k++)
    {
        int r;
        scanf("%d", &r);
        getchar();
        char a[100005];
        fgets(a, sizeof(a), stdin);

        int tigerWin = 0;
        int pathanWin = 0;

        for (int i = 0; i < r; i++)
        {
            if (a[i] == 'T')
            {
                tigerWin++;
            }
            if (a[i] == 'P')
            {
                pathanWin++;
            }
        }
        if (tigerWin > pathanWin)
        {
            printf("Tiger\n");
        }
        else  if (tigerWin < pathanWin)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}