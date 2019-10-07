#include "ep11.h"


int main (int argc, char * argv[])
{
    int a = 1;
    int b = 0;
    float z = 0.0;

    sayHello();

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d * %d = %d\n", a, b, multiply(a, b));

    // Έλεγχος για διαίρεση διά 0
    z = divide(a, b);
    if (z != -1)
        printf("%d / %d = %f\n", a, b, divide(a, b));

    return 0;
}


void sayHello ()
{
    printf("Hello World\n");
}


int add (int x, int y)
{
    return x + y;
}


int multiply (int x, int y)
{
    return x * y;
}


float divide (int x, int y)
{
    if (y == 0) {
        printf("Δεν μπορώ να διεραίσω διά 0.\n");
        return -1;
    }

    return (float) (x) / (float) (y);
}
