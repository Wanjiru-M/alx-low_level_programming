#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    unsigned int index, sum;
    size_t length, addition;
    char *charset = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char password[7] = "      ";

    if (argc != 2)
    {
        printf("Correct usage: ./keygen5 username\n");
        return 1;
    }

    length = strlen(argv[1]);
    password[0] = charset[(length ^ 59) & 63];

    for (index = 0, addition = 0; index < length; index++)
        addition += argv[1][index];

    password[1] = charset[(addition ^ 79) & 63];

    for (index = 0, sum = 1; index < length; index++)
        sum *= argv[1][index];

    password[2] = charset[(sum ^ 85) & 63];

    for (sum = argv[1][0], index = 0; index < length; index++)
    {
        if ((char)sum <= argv[1][index])
            sum = argv[1][index];
    }

    srand(sum ^ 14);
    password[3] = charset[rand() & 63];

    for (sum = 0, index = 0; index < length; index++)
        sum += argv[1][index] * argv[1][index];

    password[4] = charset[(sum ^ 239) & 63];

    for (sum = 0, index = 0; (char)index < argv[1][0]; index++)
        sum = rand();

    password[5] = charset[(sum ^ 229) & 63];

    printf("%s\n", password);
    return 0;
}
