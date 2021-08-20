#include <stdio.h>

int
main()
{
    char string[BUFSIZ];
    char ch;

    while ((ch = getc(stdin)) != EOF)
    {
        ungetc(ch, stdin);
        fgets(string, BUFSIZ, stdin);
        for (int i = 0; string[i] != '\0'; i++)
        {
            if ('a' <= string[i] && string[i] <= 'z')
                putchar('m');
            else if ('A' <= string[i] && string[i] <= 'Z')
                putchar('M');
            else
                putchar(string[i]);
        }
    }

    putchar('\n');

    return 0;
}
