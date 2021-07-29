#include<string.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char a[100], b[100];
  int i, c1 = 0, c2 = 0, j, m, len;

  fgets (a, strlen, stdin);
  fgets (b, strlen, stdin);


  for (m = 0; b[m] != '\0'; m++)
    {
      for (i = j = 0; a[i] != '\0'; i++)
	{
	  if (a[i] != b[m])
	    a[j++] = a[i];
	}
     a[j]='\0';
    }

  printf ("%s", a);

  return 0;
}
