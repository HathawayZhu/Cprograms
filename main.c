//  Created by Huawei Zhu on 2018-09-21.
//  Copyright © 2018 Huawei Zhu. All rights reserved.
//  Write a program to compute the sum of all numbers that are multiples of 4, between 30 and 1000, in three different ways: with a for loop, a while loop and a do-while loop. After each loop print the value on the screen. Write a comment before each loop.

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=30;
    int sum=0;
    for ( i=30; i<=100; i++ )
    {
        if (i%4==0){
            sum=sum+i;
        }
    }
    printf("The sum using for-loop is: %d\n", sum);
    
    i=30;
    sum=0;
    while(i<=100){
        if(i%4==0){
            sum=sum+i;
        }
        i++;
    }
    printf("The sum using while-loop is: %d\n",sum);
    
    i=30;
    sum=0;
    do{
        if(i%4==0){
            sum=sum+i;
        }
        i++;
    }
    while(i<=100);
    printf("The sum using doWhile-loop is: %d\n",sum);
    
    return sum;
}
