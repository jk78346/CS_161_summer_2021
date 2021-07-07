#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main()
{
    int i, j ,sum=0,a[100000];
    struct timeval time_start, time_end;
    for(i=0;i<100000;i++)
        a[i]=rand()%9487;

    gettimeofday(&time_start, NULL);
    i = 0;
    do{
      if( i % 10 != 0)
        a[i] *= 2;
      a[i] += i;
    }while(++i < 100);
    gettimeofday(&time_end, NULL);
    printf("I  : %lf seconds\n",((time_end.tv_sec * 1000000 + time_end.tv_usec) - (time_start.tv_sec * 1000000 + time_start.tv_usec))/1000000.0);

    gettimeofday(&time_start, NULL);
    i = 0;
    do{
      a[i] += i;
    }while( ++i < 100);
    gettimeofday(&time_end, NULL);
    printf("II : %lf seconds\n",((time_end.tv_sec * 1000000 + time_end.tv_usec) - (time_start.tv_sec * 1000000 + time_start.tv_usec))/1000000.0);
        
    gettimeofday(&time_start, NULL);
    i = 0;
    do{
      j = 0;
      do{
        sum += a[i*2+j];
      }while( ++j < 2);
    }while( ++i < 100);
    gettimeofday(&time_end, NULL);
    printf("III:%lf seconds\n",((time_end.tv_sec * 1000000 + time_end.tv_usec) - (time_start.tv_sec * 1000000 + time_start.tv_usec))/1000000.0);

    gettimeofday(&time_start, NULL);
    i = 0;
    do{
      if( rand() % 2 == 0)
        a[i] *= 2;
      a[i] += i;
    }while( ++i < 100);
    gettimeofday(&time_end, NULL);
    printf("IV :%lf seconds\n",((time_end.tv_sec * 1000000 + time_end.tv_usec) - (time_start.tv_sec * 1000000 + time_start.tv_usec))/1000000.0);
    return 0;
}
