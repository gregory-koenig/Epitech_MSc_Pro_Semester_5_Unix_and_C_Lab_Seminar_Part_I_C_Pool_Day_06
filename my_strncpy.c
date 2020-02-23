/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** CPool Day06 Task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int count = 1;

    for (; i < n; i++)
        dest[i] = src[i];
    for (i = 0; src[i] != '\0'; i++)
        count++;
    if (n > count)
        dest[i++] = '\0';
    return (dest);
}