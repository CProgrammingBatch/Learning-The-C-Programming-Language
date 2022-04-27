// header files declaration
#include <stdio.h> // for printf() library function

// entry-point function
void main(void)
{
  // primitive data-types : char, int, float, double
  // data_type variable_name = value;
  int employee_id;  // declaration
  employee_id = 10; // definition

  // inline initialization
  char gender = 'M';
  signed int signed_value = -1; // signed : it is used to define a variable that can hold negative and positive values
  const float my_pi = 3.14f;    // const : it is used to define a constant (non-modifiable) value
  const double my_radius = 6325624.2563;

  // format specifiers : %c [char], %d [int], %f [float], %lf [double]
  printf("\n===========================================\n");
  printf("# Initial Values Of Variables :: \n");
  printf("===========================================\n");
  printf(" + employee_id   = %d\n", employee_id); // '\n' : newline character
  printf(" + gender        = %c\n", gender);
  printf(" + signed_value  = %d\n", signed_value);
  printf(" + my_pi         = %f\n", my_pi);
  printf(" + my_radius     = %lf\n", my_radius);
  printf("===========================================\n");

  // re-initialization / re-definition
  gender = 'F';
  employee_id = 123;
  signed_value = 1;
  printf("\n===========================================\n");
  printf("# Updated Values Of Variables :: \n");
  printf("===========================================\n");
  printf(" + employee_id   = %d\n", employee_id);
  printf(" + gender        = %c\n", gender);
  printf(" + signed_value  = %d\n", signed_value);
  printf(" + my_pi         = %f\n", my_pi);
  printf(" + my_radius     = %lf\n", my_radius);
  printf("===========================================\n");
}
