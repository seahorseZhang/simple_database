#include "../include/entry.h"

Entry new_entry(char key[], char value[], entry_status status) {
    Entry entry = {*key, *value, status};
    return entry;
};

Entry decode() { return new_entry("1", "Seahorsee", PUT); };

void encode(Entry entry){

};