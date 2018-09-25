//
//  main.c
//  practice1_Q9
//
//  Created by Huawei Zhu on 2018-09-21.
//  Copyright © 2018 Huawei Zhu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int rows;
    int i;
    int space;
    int star=0;
    printf("Please enter number of rows(an odd integer) below:\n");
    scanf("%d",&rows);
    //===rectangle
    for (i = 1; i <= rows; i++) {
        /* the i-th row */
        /* Printing stars */
        while(star != (2*rows - 1)) {
            printf("*");
            star++;;
        }
        star=0;
        /* move to next row */
        printf("\n");
    }
    printf("\n");
    //===pyramid
    for (i = 1; i <= rows; i++) {
        /* the i-th row */
        /* Printing spaces */
        for(space = 1; space <= rows-i; space++) {
            printf(" ");
        }
        /* Printing stars */
        while(star != (2*i - 1)) {
            printf("*");
            star++;;
        }
        star=0;
        /* move to next row */
        printf("\n");
    }
    printf("\n");
    //===triangle
    for (i = 1; i <= rows; i++) {
        /* the i-th row */
        /* Printing stars */
        for (star=0;star<=2*(rows-i);star++) {
            printf("*");
        }
        /* move to next row */
        printf("\n");
    }
    printf("\n");
    //===X shape
    for (i = 1; i <= rows; i++) {
        /* the i-th row */

        if (i<=(rows+1)/2){
            /* Printing spaces */
            for(space = 1; space < i; space++) {
                printf(" ");
            }
            /* Printing stars */
            for (star=1;star<=rows-2*(i-1);star++) {
                printf("*");
            }
            /* move to next row */
            printf("\n");
        }
        else {
            /* Printing spaces */
            for(space = 1; space <= rows-i; space++) {
                printf(" ");
            }
            /* Printing stars */
            for (star=1;star<=2*(i-(rows+1)/2)+1;star++) {
                printf("*");
            }
            /* move to next row */
            printf("\n");
        }
        
    }
    printf("\n");
    return 0;
}
