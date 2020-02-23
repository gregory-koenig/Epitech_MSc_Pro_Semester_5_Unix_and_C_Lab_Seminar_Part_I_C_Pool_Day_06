/*
** EPITECH PROJECT, 2019
** test_my_strncpy
** File description:
** CPool Day06 Task04
*/

#include <criterion/criterion.h>

Test(my_revstr, reverse_string)
{
    char str[5] = "abcde";

    my_revstr(str);
    cr_assert_str_eq(str, "edcba");
}