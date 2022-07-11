#ifndef _ENTRY_H_
#define _ENTRY_H_

typedef enum {
    PUT = 1,
    DEL
} entry_status;

typedef struct {
    char key[20];
    char value[40];
    entry_status state;
} Entry;

Entry new_entry(char key[], char value[], entry_status status);

Entry decode();

void encode();

#endif