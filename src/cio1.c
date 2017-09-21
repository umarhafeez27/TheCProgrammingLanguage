#include <stdio.h>

/* copy input to output: 2a...error version */
main()
{
  int c;

  while (c=getchar() != EOF)
    putchar(c);
}
