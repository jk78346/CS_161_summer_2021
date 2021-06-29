#include <algorithm>
#include <ctime>
#include <iostream>
#include <climits>

long long calculate_sum(int *data, unsigned int size);

int main(int argc, char **argv)
{
    // generate data
    const unsigned arraySize = 32768;
    int data[arraySize];
    int option = atoi(argv[1]);
    long long sum = 0;

    for (unsigned c = 0; c < arraySize; ++c)
        data[c] = std::rand();

    if(option)
        std::sort(data, data + arraySize);

    for (unsigned i = 0; i < 10000; ++i) {
        sum += calculate_sum(data, arraySize);
    }
    std::cout << "sum = " << sum << std::endl;
}

long long calculate_sum(int *data, unsigned int size)
{
    long long sum=0;
    int t = std::rand();
    for (unsigned i = 0; i < size; ++i) {
        if (data[i] >= t)
                sum ++;
    }
    return sum;
}
