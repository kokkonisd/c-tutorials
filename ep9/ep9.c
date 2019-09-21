#include <stdio.h>

int main (int argc, char * argv[])
{
    if (argc != 2) {
        printf("need an argument\n");
        return 1;
    }

    for (int i = 0; i < argc; i++)
        printf("arg #%d: %s\n", i, argv[i]);

    char letter = argv[1][0];

    switch (letter) {
        case 'r':
            printf("run the program\n");
            break;

        case 's':
            printf("stop the program\n");
            break;

        default:
            printf("unknown command '%c'\n", letter);
            break;
    }

    return 0;
}
