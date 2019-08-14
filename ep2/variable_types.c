#include <stdio.h>

int main (int argc, char * argv[])
{
    int x = 10;
    float y = 7.32;
    double z = 7.32;
    char c = 'a';

    unsigned int life_count = 3;
    // long int g;
    // long long int s;

    printf("Ένας ακέραιος: 0x%X ή αλλιώς %d ή αλλιώς %o\n", x, x, x);
    printf("Ένας πραγματικός: %.20f\n", y);
    printf("Ένας πραγματικός με περισσότερη ακρίβεια: %.20f\n", z);
    printf("Ένας χαρακτήρας: %c\n", c);
    printf("Ένας θετικός (ή μηδέν) ακέραιος: %d\n", life_count);
    printf("a + 3? %d, ή αλλιώς %c!\n", 'a' + 3, 'a' + 3);
    printf("Το σύμβολο για την πρόσθεση είναι: %c\n", 43);

    return 0;
}