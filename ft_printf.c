
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
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdarg.h>
//#include <unistd.h>
//#include <string.h>
//
//
//void    ft_printf(int n, ...)
//{
//    va_list    ap;
//
//    va_start(ap, n);
//    printf("%s",va_arg(ap, char *));
//    printf("%s",va_arg(ap, char *));
//    printf("%s",va_arg(ap, char *));
//    printf("%s",va_arg(ap, char *));
//    va_end(ap);
//}
//
//int    main()
//{
//    ft_printf(0,"imad"," mimouni", " mimouni");
//
//    return 0;
//}
