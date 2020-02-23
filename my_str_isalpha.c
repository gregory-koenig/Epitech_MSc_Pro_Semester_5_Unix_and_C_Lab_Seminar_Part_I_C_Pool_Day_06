/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** CPool Day06 Task11
*/

int my_str_isalpha(char const *str)
{
    if (!str)
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 'a' && str[i] > 'z') || (str[i] < 'A' && str[i] > 'Z')) {
            return (0);
        }
    }
    return (1);
}