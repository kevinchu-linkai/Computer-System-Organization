//
//  main.c
//  CSO_Assignment1_Q4
//
//  Created by 朱麟凱 on 2022/9/13.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Create a list that can hold the greatest possible size of an input
    char input[255];
    //Set input into default setting which is \0
    for (int i = 0; i < 255; ++i) {
        input[i] = '\0';
    }
    printf("Put in a string:\n");
    scanf("%s", input);
    //Count the number of input characters
    int n = 0;
    for (int i = 0; i < 255; ++i) {
        if (input[i] != '\0' && input[i+1] == '\0') {
            n = i+1;
            break;
        }
    }
    //Print the input backwards for n times according to the sixze of the input
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i+2; ++j) {
            printf("%c", input[n-j]);
        }
        printf("\n");
    }
    return 0;
}
