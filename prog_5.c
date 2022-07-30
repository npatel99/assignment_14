/**Write a program to find the smallest number stored in an array of size 10. Take array values from the user.*/

#include <stdio.h>

int main() {
    int a[10], i, smallest;
    printf("Enter all 10 elements: ");
    for(i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    for(i = 1; i<10; i++)
    {
        if(smallest>a[i])
            smallest = a[i];
    }
    
    printf("smallest number in array is: %d\n", smallest);
    
    return 0;
}
