#include <stdio.h>
#include <stdbool.h>

int main (int argc, char * argv[])
{
    int age = 26;

    // μεταβλητή = συνθήκη ? αληθής : ψευδής;
    // int flag = age > 20;
    bool flag = age > 20;

    if (!flag)
        printf("Flag is false\n");
    else
        printf("Flag is true\n");

    return 0;
}
