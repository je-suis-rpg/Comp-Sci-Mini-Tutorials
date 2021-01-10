#include<stdio.h>

int main (void)
{
  int variable;

  variable = 65;

  printf("Here is our variable %i\n", variable);

  int second_variable;
  int *second_variable;

  second_variable = 89;

  printf("second_variable: %d\n", *second_variable);
  printf("second_variable_actual: %ls\n", second_variable);
}

