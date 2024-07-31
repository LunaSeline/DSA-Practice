#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Entry point of the program
int main (){

    int N, ne_nu;
    // Read an integer from the user which determines the number of elements
    scanf("%d", &N);

    // Dynamically allocate memory for an array of integers of size N
    int *p_nu =(int*) malloc(N * sizeof(int));
    
    int i=0;
    // Loop to read N integers from the user
    while(i<N){
        // Read an integer from the user and store it in ne_nu
        scanf("%d", &ne_nu);

        // Store the read integer in the dynamically allocated array at index i
        *(p_nu + i) = ne_nu;
        i++;
    }

    // Loop to print the elements of the array in reverse order
    while(i>=1){
        // Decrement i and print the i-th element in the array
        printf("%d ", *(p_nu + --i));
    }
    // Free the allocated memory
    free(p_nu);
    return 0;
}
