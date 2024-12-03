# ifdef DEBUG
#include <stdio.h>

#define TRACE() \
printf("file: %s, Line %d, Fuction: %s/n",__FILE__,__LINE__,__func__);

#else
#define TRACE()
#endif