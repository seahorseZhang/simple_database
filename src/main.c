#include <stdio.h>
#include "../include/entry.h"
#include "../include/file.h"
#include "../include/customer.h"

// blog.csdn.net/qq_36456827/article/details/125304612

int main(void) {
    printf("Main entry start.\n");
    while (1) {
        char *input;
        scanf("%s", input);
        printf("Receive from user, %s", input);
        operate(input);
    }
    return 0;
}