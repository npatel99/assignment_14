/**Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user*/

#include <stdio.h>

int main() {
    int a[10], i;
    float sum = 0, avg;
    printf("Enter all 10 elements: ");
    for(i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = sum/10;
    printf("average and sum of stored elements in array is: %f\n", avg);
    
    return 0;
}
