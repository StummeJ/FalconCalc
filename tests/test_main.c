//
// Created by James Stumme on 7/8/16.
//

#include <check.h>
#include <stdlib.h>

#include "test_calculator.h"

int main(int argc, char *argv[])
{
    int number_failed;
    SRunner *runner;

    Suite *calc_suite = test_calculator_suite();
    runner = srunner_create(calc_suite);

    srunner_run_all(runner, CK_NORMAL);
    number_failed = srunner_ntests_failed(runner);
    srunner_free(runner);

    return (number_failed == 0)
           ? EXIT_SUCCESS
           : EXIT_FAILURE;
}