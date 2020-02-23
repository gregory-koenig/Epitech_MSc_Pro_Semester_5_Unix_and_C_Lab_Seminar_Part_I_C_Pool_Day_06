/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** CPool Day06 Task09
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] += 32;
    }
    return (str);
}