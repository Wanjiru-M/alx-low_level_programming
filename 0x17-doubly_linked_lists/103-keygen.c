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
    unsigned int index, multiplier;
    size_t length, sum;
    char *charset = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char password[7] = "      ";

    if (argc != 2)
    {
        printf("Correct usage: ./keygen5 username\n");
        return 1;
    }

    length = strlen(argv[1]);
    password[0] = charset[(length ^ 59) & 63];

    for (index = 0, sum = 0; index < length; index++)
        sum += argv[1][index];

    password[1] = charset[(sum ^ 79) & 63];

    for (index = 0, multiplier = 1; index < length; index++)
        multiplier *= argv[1][index];

    password[2] = charset[(multiplier ^ 85) & 63];

    for (multiplier = argv[1][0], index = 0; index < length; index++)
    {
        if ((char)multiplier <= argv[1][index])
            multiplier = argv[1][index];
    }

    srand(multiplier ^ 14);
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
