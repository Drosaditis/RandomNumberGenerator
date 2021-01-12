#include <stdio.h>
#include <math.h>
#include <time.h>

long int nextRand(long int seed,long int a,long int c,long int m){
    seed=(a * seed + c) % m;
    return seed;
}

long int randomNumber(int n){
    long int a=11035245,c=123945,m=pow(2,16),seed=163341;
    return nextRand(seed,a,c,m)*n;
}

int main()
{
    printf("%lu\n",randomNumber(time(0)));
    return 0;
}
