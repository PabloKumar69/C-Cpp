#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void print_min_char(char *s);
int main()
{
    char s[] = "abcdefghabcdefghabcdefg";
    return 0;
}

void print_min_char(char *s)
{
    int length = strlen(s);
    char unique[length];
    int counted = 0;
    int min_count;
    char min_char;
    for (int i = 0; i < length; i++)
    {
        bool already_counted = false;
        for (int j = 0; j < counted; j++)
            if (s[i] == unique[j])
                already_counted = true;
        if (already_counted)
            continue;
        int count = 0;
        for (int j = 0; j < length; j++)
            if (s[i] == s[j])
                count++;

        unique[counted]
    }
}