#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  if(argc != 4)
  {
    printf("Invalid count of argument\n");
    return 1;
  }

  float n1 = atof(argv[1]);
  char n2 = argv[2][0];
  float n3 = atof(argv[3]);


  float res = 0;
  switch(n2)
  {
    case '+':
      res = n1 + n3;
      break;
    case '-':
      res = n1 - n3;
      break;
    case '*':
      res = n1 * n3;
      break;
    case '/':
      res = n1 / n3;
      break;
    default:
      printf("Invalid expression\n");
      return 1;
  }

  printf("Result: %.1f\n", res);

  return 0;
}
