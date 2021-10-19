unsigned int hash(char* name)
{
    int i = 0;
    unsigned int hash_value = 0;
    int size = strlen(name);

    while (i < size)
    {
        hash_value = (hash_value * 15) + name[i];
        i++;
    }

    hash_value %= TABLE_SIZE;

    return hash_value;
}

void init_table()
{
    int i = 0;

    while (i < TABLE_SIZE)
    {
        hash_table[i] = NULL;
        i++;
    }
}

void print_table()
{
    int i = 0;

    while (i < TABLE_SIZE)
    {
        if (hash_table[i] == NULL)
            printf("\t%i\t----\n", i);
        else
            printf("\t%i\t%s\n", i, hash_table[i]->name);
        i++;
    }
}

bool table_insert(professor* info)
{
    if (info == NULL)
        return false;

    int index = hash(info->name);
    
    if (hash_table[index] != NULL)
        return false;

    hash_table[index] = info;

    return true;
}

professor* lookup(char* name)
{
    int index = hash(name);

    if (strcmp(name, hash_table[index]->name) == 0)
        return hash_table[index];
    
    return NULL;
}
