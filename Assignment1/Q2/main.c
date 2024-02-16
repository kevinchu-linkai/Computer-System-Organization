//
//  main.c
//  CSO_Assignment1_Q2
//
//  Created by 朱麟凱 on 2022/9/11.
//

#include <stdio.h>
#include <string.h>

int main() {
    //Create a list that can hold 10 integers and ask for user input
    int inputs[10];
    printf("Enter 10 integers:\n");
    //Store 10 integers into the list
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &inputs[i]);
    }
    printf("\n[");
    //Check the integer if it has appeared before
    for (int i = 0; i < 10; ++i)
    {
        int k = inputs[i];
        int repeat = 0;
        for (int j = 0; j < i; ++j)
        {
            //Break the loop if the integer is repeated
            if (inputs[j] == k){
                repeat = 1;
                break;
            }
        }
        //Print the integer if it first appears
        if (repeat == 0){
            if (i == 0){
                printf("%d", k);
            }
            else{
                printf(",%d", k);
            }
        }
    }
    printf("]");
    return 0;
}
