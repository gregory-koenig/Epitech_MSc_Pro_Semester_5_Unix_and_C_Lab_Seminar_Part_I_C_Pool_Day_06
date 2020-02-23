/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** CPool Day06 Task05
*/

int it_count(char c, char d, int count)
{
    if (c == d)
        count++;
    return (count);
}

char *my_strstr(char *str, char const *to_find)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[count]) {
            count++;
        } else {
            count = 0;
            count = it_count(str[i], to_find[count], count);
        }
        if (to_find[count] == '\0')
            return &str[(i - count) + 1];
    }
    return (0);
}