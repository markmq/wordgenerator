#include <stdio.h>

int
main ()
{
  int c1 = 33;
  int c2 = 33;
  int c3 = 33;
  int c4 = 33;
  int c5 = 33;
  int c6 = 33;
  int c7 = 33;
  int c8 = 33;
  int c9 = 33;
  int c10 = 33;
  int c11 = 33;
  int c12 = 33;
  int c13 = 33;
  int c14 = 33;
  int c15 = 33;
  int c16 = 33;
  int c17 = 33;
  int control = 0;
  int crcntrl = 0;
  int wrdcntrl = 8;

  while (wrdcntrl != 0)
    {
      printf ("%c", c1);

      if (c1 == 126)
	{
	  wrdcntrl--;
	  c1 = 33;
	}


      if (wrdcntrl >= 2)
	printf ("%c", c2);

      if (c2 == 126)
	{
	  c2 = 33;
	  c1++;
	}

      if (wrdcntrl >= 3)
	printf ("%c", c3);

      if (c3 == 126)
	{
	  c3 = 33;
	  c2++;
	}
      if (wrdcntrl >= 4)
	printf ("%c", c4);

      if (c4 == 126)
	{
	  c4 = 33;
	  c3++;
	}
      if (wrdcntrl >= 5)
	printf ("%c", c5);

      if (c5 == 126)
	{
	  c5 = 33;
	  c4++;
	}
      if (wrdcntrl >= 6)
	printf ("%c", c6);

      if (c6 == 126)
	{
	  c6 = 33;
	  c5++;
	}
      if (wrdcntrl >= 7)
	printf ("%c", c7);

      if (c7 == 126)
	{
	  c7 = 33;
	  c6++;
	}
      if (wrdcntrl >= 8)
	printf ("%c", c8);

      if (c8 == 126)
	{
	  c8 = 33;
	  c7++;
	}
      c8++;




      printf ("\t");
      crcntrl++;
      if (crcntrl == 6)
	{
	  printf ("\n");
	  crcntrl = 0;
	}


    }
  puts ("");
  return (0);

}
