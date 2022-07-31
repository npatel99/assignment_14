/*Write a program in C to copy the elements of one array into another array.Take array values from the user*/

#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    printf("Enter all %d elements in array: ", n);
    for(i = 0; i<n; i++)
        scanf("%d", &arr1[i]);
    
    i = 0;
    while(i<n)
    {
        arr2[i] = arr1[i];
        i++;
    }
    printf("\n input array arr1[%d] is: ", n);
    for(i=0; i<n; i++)
        printf("%d ", arr1[i]);
        
    printf("\ncopied array arr2[%d] is: ", n);
    for(i=0; i<n; i++)
        printf("%d ", arr2[i]);
    
    return 0;
}
