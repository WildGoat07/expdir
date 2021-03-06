#ifndef DEF_FILE_UTILS_H
#define DEF_FILE_UTILS_H
#include <stdbool.h>
#include <stdlib.h>

bool file_hidden(char *path);
void file_filename(char *path, char *buffer);
bool file_exists(char *path);
void file_dirname(char *path, char *buffer);
bool file_isDir(char *path);
bool file_isLink(char *path);
void simplifyString(char *str, char *buffer);
bool stringStartWith(char *str, char *start);
void file_combine(char *dest, char *src);
void file_sort(char **list, size_t listSize);
size_t filterList(char **input, size_t n, char **output, char *filter);
bool anyEntry(char **list, size_t n);

#endif