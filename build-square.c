#include <stdlib.h>
#include <stddef.h>

/*BUILD A SQUARE KATA */
/*Given an integer, returns a square with the same side length*/

char* generate_shape(size_t n) {
  char *shape = malloc((n*n)+(n));
   for (int i = 1; i < (n*n)+(n) ; i ++) {
        if ((i != 0) && (i % (n+1) == 0)){
            shape[i-1] = '\n';
        }
        else {
            shape[i-1] = '+';
        }
   }
   
   shape[(n*n) + (n-1)] = '\0';

   return shape;
   
}