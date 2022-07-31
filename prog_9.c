/*Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.*/

#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter all %d elements in array: ", n);
    for(i = 0; i<n; i++)
        scanf("%d", &arr[i]);
    
    j = n-1;
    i = 0;
    while(i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("\n reverse array is: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
