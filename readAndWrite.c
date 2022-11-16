#include <stdio.h>

int main()
{
    int lenth, i;
    char c;
    char text1[100]; // the maximum lenth of text which we will take.

    while (1)
    {
        c = getchar();
        if (c == '\n') // terminete reading on first line
            break;
        text1[i] = c;
        i++;
    }
    lenth = i;

    for (i = 0; i < lenth; i++)
    {
        printf("%c", text1[i]);
    }
    return 0;
}
