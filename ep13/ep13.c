#include <stdio.h>

#define PI 3.14
#define MYPI 15
#define TWOPI (2 * PI)
#define MYCONST 7983
#define MYSTRING "hello"
#define ABS(x) x > 0 ? x : -x
#define MAX(a, b) a > b ? a : b
#define SQ(x) ((x) * (x))
#define INCR(a, b) { a++; b++; }

#if MYPI == 3
#define MYTWOPI (2 * MYPI)
#else
#define MYTWOPI 1
#endif

// #define DEBUG

#ifdef DEBUG
#define PRINT(x) printf("Τιμή του " #x " = %d\n", x)
#else
#define PRINT(x)
#endif


int main (int argc, char * argv[])
{
    int foo = SQ(3 + 1); // 3 + 1 * 3 + 1 = 3 + 3 + 1 = 7
    int bar = SQ(4);
    int flag = 0;

    printf("|-3| = %d, |4.18| = %.2f, max(10, -100) = %d\n", ABS(-3), ABS(4.18), MAX(10, -100));
    
    if (flag == 1)
        INCR(foo, bar);
    
    PRINT(foo);
    PRINT(bar);
    PRINT(MYTWOPI);

    return 0;
}
