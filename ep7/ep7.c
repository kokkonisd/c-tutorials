#include <stdio.h>

int main (int argc, char * argv[])
{
    int i = 1;
    // int j = 0;

    // Δομή for
    // for i in range(1, 11):
    // for (i = 0, j = 9; (i <= 10) && (j >= 1); i += 2, j -= 2)
        // printf("%d, %d\n", i, j);
    

    // Διαφορά μεταξύ i++ και ++i
    // printf("%d\n", i++); // i = i + 1
    // printf("%d\n", ++i); // i = i + 1


    // Δομή while
    // while (i <= 10) {
    //     printf("%d\n", i);
    //     i++;
    // }


    // Δομή do-while
    // do {
    //     printf("%d\n", i);
    //     i++;
    // } while (i <= 10);


    // Άπειρο for
    // for (;;) {
    //     if (i > 10)
    //         break;

    //     printf("%d\n", i);
    //     i++;
    // }


    // Άπειρο while
    while (1) {
        if (i > 10)
            break;

        printf("%d\n", i);
        i++;
    }


    return 0;
}
