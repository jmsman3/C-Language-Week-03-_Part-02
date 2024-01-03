// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    char s;
    char word[100];
    char sentence[100];

    scanf("%c", &s);
    scanf("%s", &word);
    getchar();
    fgets(sentence, sizeof(sentence), stdin);

    printf("%c\n", s);
    printf("%s\n", word);
    printf("%s\n", sentence);

    return 0;
}