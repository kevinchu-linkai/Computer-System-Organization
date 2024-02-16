//
//  main.c
//  CSO_Assignment1_Q3(Correct)
//
//  Created by 朱麟凱 on 2022/9/13.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Create a list that can hold the greatest possible size of an input
    char input[255];
    //Create a list that can hold all possible input character based on ascii table
    int last_occurance[127];
    //Set all the occurance and input into default setting which is 0 or \0
    for (int i = 0; i < 127; ++i) {
        last_occurance[i] = 0;
    }
    for (int i = 0; i < 255; ++i) {
        input[i] = '\0';
    }
    //Store the user input into the input list
    printf("Please put in a string of numbers:\n");
    fgets(input, sizeof(input), stdin);
    //For every character in the ascii table, remember their last occurance index in the list
    for (int i = 0; i < 255; ++i) {
        if (input[i] != '\0') {
            last_occurance[input[i]] = i;
        }
    }
    //For ecery character in the input list, print it if it is not the last occurance of the character
    for (int i = 0; i < 255; ++i) {
        
        if (input[i] != '\0' && i != last_occurance[input[i]]) {
            printf("%c",input[i]);
        }
    }
    printf("\n");
    return 0;
}
