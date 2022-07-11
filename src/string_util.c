#include "../include/string_util.h"

void to_lower(char *input) {
    while (*input != '\n') {
        if (*input >= 'A' && *input <= 'Z') {
            *input -= 26;
            input++;
        }
    }
}