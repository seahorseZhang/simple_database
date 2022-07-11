#include "../include/file.h"
#include "../include/entry.h"
#include <stdio.h>

char *STORAGE_PATH = "storage.txt";

Entry read() {
    Entry entry;
    FILE *fp = fopen(STORAGE_PATH, "r+");
    int i = 0;
    fscanf(fp, "%d %s %s \n", &entry.state, entry.key, entry.value);
    fclose(fp);
    return entry;
}

void write(Entry entry) {
    FILE *fp;
    fp = fopen(STORAGE_PATH, "a+");
    if (fp == NULL) {
        printf("Error, open file failed");
        return;
    }
    fprintf(fp, "%d %s %s \n", entry.state, entry.key, entry.value);
    fclose(fp);
}