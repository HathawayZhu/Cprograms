//  Created by Huawei Zhu on 2018-09-21.
//  Copyright © 2018 Huawei Zhu. All rights reserved.
//  Write a program which prompts the user to input a positive number and then it prints it. Your program has to check that the input is positive and if it is not, it has to keep asking for a valid input until one is provided. You may assume that the input is indeed an integer number.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Please enter an integer number below:\n");
    scanf("%d",&a);
    while (a<=0){
        printf("Enter a valid number:\n");
        scanf("%d",&a);
    }
    printf("Congrats! You entered a valid number\n");
    printf("The number is %d:",a);
    
    return 0;
}
