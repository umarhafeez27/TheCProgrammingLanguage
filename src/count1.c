#include <stdio.h>

/* count characters in input */
void main()
{
  double nc;

  nc=0;
  for (nc=0; getchar()!=EOF; ++nc)
    ; /* null statement*/
  printf ("%.0f\n", nc);
}
