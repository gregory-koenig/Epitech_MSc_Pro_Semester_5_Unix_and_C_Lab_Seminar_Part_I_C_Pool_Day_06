/*
** EPITECH PROJECT, 2019
** test_my_strncmp
** File description:
** CPool Day06 Task11
*/

#include <criterion/criterion.h>

Test(my_strncmp, compare_if_all_char_are_equals)
{
    cr_assert_eq(my_strncmp("hello", "hello", 2), 0);
}

Test(my_strncmp, compare_if_one_char_is_lower)
{
    cr_assert_eq(my_strncmp("hallo", "hello", 2), -1);
}

Test(my_strncmp, compare_if_one_char_is_greater)
{
    cr_assert_eq(my_strncmp("hello", "hallo", 2), 1);
}