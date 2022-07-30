/**Write a program to calculate the sum of all even numbers and sum of all odd numbers, 
which are stored in an array of size 10. Take array values from the user*******/

#include <stdio.h>

int main() {
    int a[10], i, sum_even = 0, sum_odd = 0;
    printf("Enter all 10 elements: ");
    for(i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2 == 0)
            sum_even+=a[i];
        else
            sum_odd+=a[i];
    }
    
    printf("sum of all even numbers in array is: %d\n", sum_even);
    printf("sum of all odd numbers in array is: %d\n", sum_odd);
    
    return 0;
}
