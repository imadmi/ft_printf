
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int	add( int nHowMany, ... )
{
  int	j = 0 , i = -1;
  
  va_list       intArgumentPointer;
  va_start( intArgumentPointer, nHowMany );
  while(++i < nHowMany)
    j += va_arg( intArgumentPointer, int );
  va_end( intArgumentPointer );
  
  return j;
} 

int	main()
{
	printf( "\n 10 + 20 = %d \n",add( 2, 10, 20 ));

	return 0;
}