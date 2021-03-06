/*  Hackerranck Problem
An array is a container object that holds a fixed number of values of a single type. To create an array in C, we can do int arr[n];. Here, arr, is a variable array which holds up to integers. The above array is a static array that has memory allocated at compile time. A dynamic array can be created in C, using the malloc function and the memory is allocated on the heap at runtime. To create an integer array, of size , int *arr = (int*)malloc(n * sizeof(int)), where

points to the base address of the array.

In this challenge, you have to create an array of size

dynamically, input the elements of the array, sum them and print the sum of the elements in a new line.

Input Format

The first line contains an n integer,
.
The next line contains n

space-separated integers.

Constraints
1<=n<=1000
1<=ai<=1000

Output Format

Print in a single line the sum of the integers in the array.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum=0,num;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("%d",sum);
    return 0;
}
/* OUTPUT
nput (stdin)
Download

    6

    16 13 7 2 1 12 

Your Output (stdout)

    51

Expected Output
Download

    51
    
    */
