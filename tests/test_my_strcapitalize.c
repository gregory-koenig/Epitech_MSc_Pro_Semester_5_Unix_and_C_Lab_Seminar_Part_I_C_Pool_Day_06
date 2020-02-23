/*
** EPITECH PROJECT, 2019
** test_my_strcapitalize
** File description:
** CPool Day06 Task11
*/

#include <criterion/criterion.h>

Test(my_strcapitalize, uppercase_first_letter_of_every_words)
{
    char str[] = "how are you?";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "How Are You?");
}

Test(my_strcapitalize, lower_inside_letters_of_every_words)
{
    char str[] = "HOw ARE YoU?";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "How Are You?");
}