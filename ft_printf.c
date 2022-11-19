
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int	add( int n, ... )
{
  int	j = 0 , i = -1;
  
  va_list       P_int;
  va_start( P_int, n );
  while(++i < n)
    j += va_arg( P_int, int );
  va_end( P_int );
  
  return j;
} 

int	main()
{
	printf( "\n 10 + 20 = %d \n",add( 2, 10, 20 ));

	return 0;
}