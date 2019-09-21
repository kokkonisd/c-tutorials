#include <stdio.h>

int main (int argc, char * argv[])
{
    // Arrays
    // int list[3];

    // for (int i = 0; i < 3; i++)
    //     list[i] = i + 1;

    // for (int i = 0; i < 3; i++)
    //     printf("%d\n", list[i]);


    // A string (?)
    // char name[] = {'D', 'i', 'm', 'i', 't', 'r', 'i', 's', '\0'};
    // printf("%s\n", name);
    
    // Names and ages
    int ages[] = { 30, 15, 57 };
    char names[][10] = {
        "Yorgos",
        "Maria",
        "Thanasis"
    };

    names[2][0] = 'H';

    for (int i = 0; i < 3; ++i)
        printf("%c. (%s): %d χρονών\n", names[i][0], names[i], ages[i]);

    return 0;
}
