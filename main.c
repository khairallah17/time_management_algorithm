#include "includes/header.h"
#include "includes/function.c"

int main ()
{
    professor barazzouk = {.name = "barazzouk", .disponibility = "14->16"};

    init_hash_table();
    table_insert(&barazzouk);
    professor* test = lookup("barazzouk");
    print_table();

    if (test)
        printf("found/n");
    else
        printf("not found/n");

    // printf("%u", hash(&barazzouk));
}