/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** CPool Day06 Task07
*/

int *my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i <= n; i++) {
        if (s1[i] != s2[i] && s1[i] < s2[i]) {
            return (-1);
        } else if (s1[i] != s2[i] && s1[i] > s2[i]) {
            return (1);
        }
    }
    return (0);
}