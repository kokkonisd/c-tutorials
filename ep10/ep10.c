#include <stdio.h>

int main (int argc, char * argv[])
{
    // int a = 10;
    // int * ptr = NULL; // 0x0

    // ptr = &a;
    // *ptr = 15;

    // printf("%d\n", a);

    // int list[] = { 23, 48, 17 };
    // int * list_ptr = (int *) &list; // int(3.4) = 3

    // for (int i = 0; i < 3; i++)
    //     printf("%d\n", *(list + i));

    argv++;
    argc--;

    for (char ** i = argv; (i - argv) < argc; i++)
        printf("%s\n", *i);

    return 0;
}
