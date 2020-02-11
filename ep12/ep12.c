#include "ep12.h"


int main (int argc, char * argv[])
{
    int x = 5;
    printf("Πριν το addOne(), το x είναι: %d\n", x);
    addOne(&x);
    printf("Μετά το addOne(), το x είναι: %d\n", x);

    return 0;
}


void addOne (int * a)
{
    (*a)++;
}
