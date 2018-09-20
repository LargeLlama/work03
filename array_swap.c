#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Rubin Peci
//Period 5 Systems
//hw3 - array swap
//2018-09-19

int main()
{
    //initialize an array for 10 ints and the pointer for it
    int ray[10];
    int *pr = ray;

    //get the seed for random number
    srand( time(NULL) );
   
    //set each element to randomly generated integer, and set the last element to 0
    for(int i = 0; i < (sizeof(ray) / 4) - 1; i++)
        ray[i] = rand();
    ray[9] = 0;

    //print each element of ray
    for (int i = 0; i < sizeof(ray) / 4; i++)
        printf("ray[%d]: %d\n", i, ray[i]);

    //initialize a new array and the pointer for it
    int arr[10];
    int *pa = arr;

    //loop thru arr from indices 0-9, while loop thru ray from indices 9-0
    for(int i = 0; i < sizeof(arr) / 4; i++)
        *(pa + i) = *(pr + 9 - i);

    //print each element of arr
    for(int i = 0; i < sizeof(arr) / 4; i++)
        printf("arr[%d]: %d\n", i, arr[i]);
}
