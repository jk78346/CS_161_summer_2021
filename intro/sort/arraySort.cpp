#include <stdio.h>
#include <algorithm>
#include <ctime>
#include <iostream>
#include <climits>
#include <sys/time.h>
/*extern "C"
{
#include "perfstats.h"
}*/

//int count_larger_than(int *data, int array_size, int threshold);

int main(int argc, char **argv)
{
    struct timeval start, end;
    // generate data
    int array_size = 131072;
    int *data;
    int option = atoi(argv[1]);
    if ( argc > 2)
        array_size = atoi(argv[2]);

    if(argc != 3){
      fprintf(stderr, "Usage: %s [option] [array size]\n", argv[0]);
      exit(0);
    }

    long long sum = 0;
    data = (int *)malloc(sizeof(int)*array_size);
    for (unsigned i = 0; i < array_size; ++i)
        data[i] = std::rand();

    gettimeofday(&start, NULL);
    if(option)
        std::sort(data, data + array_size);
    
    for(unsigned k = 0; k < array_size*1000; k++){
        int threshold = std::rand();
        sum =0;
        for (unsigned i = 0; i < array_size; ++i) {
            if (data[i] >= threshold)
                sum++;
        }
    }
    gettimeofday(&end, NULL);
    std::cout << "sort?" << option << "; array_size = "<< array_size << "; sum = " << sum << std::endl;
    fprintf(stderr, "time: %ld (us)\n", ((end.tv_sec * 1000000 + end.tv_usec)-(start.tv_sec * 1000000 + start.tv_usec)));

}




