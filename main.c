/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on January 11, 2016, 12:35 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
        
    int i, j, n;
    int determinant;
    
    printf("\nEnter lines number: ");
    scanf("%d", &n);
    int element[n][n];

    //Filling the array with the values of the elements of the determinant.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nEnter element a[%d][%d]=", i, j);
            scanf("%d", &element[i][j]);
        }
    }
    
    printf("\nHere is your square matrix:\n\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("| %d |", element[i][j]);
        }
        printf ("\n");
    }
    
    if (n == 2) {
       determinant = ( element[0][0] * element[1][1] ) - ( element[0][1] * element[1][0] );
       printf("\nYou have entered a two line square matrix and its determinant is: %d", determinant);
    }
    
    if (n == 3) {
       //Method of triangles or Sarus?
       determinant = (element[0][0] * element [1][1] * element[2][2]) + (element[0][1] * element[1][2] * element[2][0]) + (element[0][2] * element[1][0] * element[2][1]) - (element[0][2] * element[1][1] * element[2][0]) - (element[0][0] * element[1][2] * element[2][1]) - (element[0][1] * element[1][0] * element[2][2]);
       printf("\nYou have entered a determinant of third line and its value is: %d ", determinant);
    }
    
    else {
        //Calculate a determinant with random lines number 
    }
    
    return (EXIT_SUCCESS);
}

