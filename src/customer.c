#include "../include/customer.h"
#include <stdio.h>
#include <string.h>
#include "../include/string_util.h"

void operate(char *input) {
    printf("Operate user operation.");
    if (*input == '\0') return;
    char delims[] = " ";
    char *result;
    result = strtok(input, delims);
    to_lower(result);
    if (strcmp(result, "insert") == 0) {
        printf("Do insert operation.");
    } else if (strcmp(result, "delete")) {
    
    } else if (strcmp(result, "modify")) {
    
    } else if (strcmp(result, "query")) {
    
    } else {
        printf("Illegal operation, please try again.");
    }
};

void insert(char *key, Entry entry) {
    
};

void delete(char *key) {

};

void modify(char *key, Entry entry);

Entry *query(char *key);