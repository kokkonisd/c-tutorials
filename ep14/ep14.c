#include "ep14.h"


void print_entry (Entry entry)
{
    printf("Name: %s\n\tPhone: %s\n\tEmail: %s\n", entry.name, entry.phone, entry.email);
}


void print_book (AddressBook book)
{
    int i = 0;

    for (i = 0; i < MAX_ROWS; i++)
        if (book.rows[i].set) {
            print_entry(book.rows[i]);
            printf("----\n");
        }
}


int main (int argc, char * argv[])
{      
    int i = 0;

    Entry me = { .name = "jimkokko5",
                 .phone = "6911235325111111",
                 .email = "kokkonisd@gmail.com",
                 .set = 1 };

    AddressBook book;

    for (i = 0; i < MAX_ROWS; i++)
        book.rows[i].set = 0;

    book.rows[0] = me;

    print_book(book);

    return 0;
}
