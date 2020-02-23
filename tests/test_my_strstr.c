/*
** EPITECH PROJECT, 2019
** test_my_strstr
** File description:
** CPool Day06 Task11
*/

#include <criterion/criterion.h>

Test(my_strstr, find_two_characters_in_string)
{
    cr_assert(strstr("hello", "lo"), "lo");
}

Test(my_strstr, dont_find_two_characters_in_string)
{
    cr_assert_not(my_strstr("hello", "ab"), "ab");
}