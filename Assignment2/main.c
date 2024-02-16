//
//  main.c
//  Assignment2
//
//  Created by 朱麟凱 on 2022/9/27.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    float result = 0;
    for (int i = 1; i <= 10000; ++i) {
        if (i % 2 == 1) {
            result = result + (1 / (float)i);
        }
        else{
            result = result - (1 / (float)i);
        }
    }
    printf("Result-1: addition from left to right accumulated in float:\n%.30f\n\n", result);
    
    
    result = 0;
    for (int i = 10000; i > 0; --i) {
        if (i % 2 == 1) {
            result = result + (1 / (float)i);
        }
        else{
            result = result - (1 / (float)i);
        }
    }
    printf("Result-2: addition from right to left accumulated in float:\n%.30f\n\n", result);
    
    
    result = 0;
    float positive = 0;
    float negative = 0;
    for (int i = 1; i <= 9999; i = i + 2) {
        positive = positive + (1 / (float)i);
    }
    for (int i = 2; i <= 10000; i = i + 2) {
        negative = negative - (1 / (float)i);
    }
    result = positive + negative;
    printf("Result-3: all positives + all negatives from left to right accumulated in float:\n%.30f\n\n", result);
    
    
    result = 0;
    positive = 0;
    negative = 0;
    for (int i = 9999; i >= 1; i = i - 2) {
        positive = positive + (1 / (float)i);
    }
    
    for (int i = 10000; i > 0; i = i - 2) {
        negative = negative - (1 / (float)i);
    }
    result = positive + negative;
    printf("Result-4: all positives + all negatives from right to left accumulated in float:\n%.30f\n\n", result);
    
    
    
    
    double result_2 = 0;
    for (int i = 1; i <= 10000; ++i) {
        if (i % 2 == 1) {
            result_2 = result_2 + (1 / (double)i);
        }
        else{
            result_2 = result_2 - (1 / (double)i);
        }
    }
    printf("Result-5: addition from left to right accumulated in double float:\n%.70f\n\n", result_2);
    
    
    result_2 = 0;
    for (int i = 10000; i > 0; --i) {
        if (i % 2 == 1) {
            result_2 = result_2 + (1 / (double)i);
        }
        else{
            result_2 = result_2 - (1 / (double)i);
        }
    }
    printf("Result-6: addition from right to left accumulated in double float:\n%.70f\n\n", result_2);
    
    
    result_2 = 0;
    double positive_2 = 0;
    double negative_2 = 0;
    for (int i = 1; i <= 9999; i = i + 2) {
        positive_2 = positive_2 + (1 / (double)i);
    }
    for (int i = 2; i <= 10000; i = i + 2) {
        negative_2 = negative_2 - (1 / (double)i);
    }
    result_2 = positive_2 + negative_2;
    printf("Result-7: all positives + all negatives from left to right accumulated in double float:\n%.70f\n\n", result_2);
    
    
    result_2 = 0;
    positive_2 = 0;
    negative_2 = 0;
    for (int i = 9999; i >= 1; i = i - 2) {
        positive_2 = positive_2 + (1 / (double)i);
    }
    
    for (int i = 10000; i > 0; i = i - 2) {
        negative_2 = negative_2 - (1 / (double)i);
    }
    result_2 = positive_2 + negative_2;
    printf("Result-8: all positives + all negatives from right to left accumulated in double float:\n%.70f\n\n", result_2);
    return 0;
}
