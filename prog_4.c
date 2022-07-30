/**Write a program to find the greatest number stored in an array of size 10. Take array values from the user*/

#include <stdio.h>

int main() {
    int a[10], i, great;
    printf("Enter all 10 elements: ");
    for(i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    great = a[0];
    for(i = 1; i<10; i++)
    {
        if(great<a[i])
            great = a[i];
    }
    
    printf("greatest number in array is: %d\n", great);
    
    return 0;
}
