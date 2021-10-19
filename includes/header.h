#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define NAME_SIZE 256
#define TIME_SIZE 10
#define TABLE_SIZE 10

enum day {monday, tuesday, wednesday, thursday, friday};

const char pause[10] = "13->14";

typedef struct {
    char    name[NAME_SIZE];
    char    disponibility[NAME_SIZE][NAME_SIZE];
    char    classes[NAME_SIZE];
    char    module_name[NAME_SIZE];
}professor;

typedef struct {
    int     size;
    char    name[NAME_SIZE];
}classe;

typedef struct{
    char    degree[NAME_SIZE];
    int     number_of_students;
    int     number_of_groups;
}group;

typedef struct{
    char    name[NAME_SIZE];
    int     hours;
}modules;

professor* hash_table[TABLE_SIZE];

#endif