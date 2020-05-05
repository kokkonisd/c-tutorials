#ifndef __EP_14_H__
#define __EP_14_H__

#include <stdio.h>

#define MAX_DATA 400
#define MAX_ROWS 100


typedef struct {
    char name[MAX_DATA];
    char phone[MAX_DATA];
    char email[MAX_DATA];
    int set;
} Entry;


typedef struct {
    Entry rows[MAX_ROWS];
} AddressBook;


#endif
