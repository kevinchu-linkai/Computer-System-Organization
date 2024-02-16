//
//  main.c
//  CSO_Assignment1_Q1
//
//  Created by 朱麟凱 on 2022/9/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//define a typedef structure of the university detail
typedef struct{
    char name[255];
}university_detail;

//define a typedef structure of the student detail
typedef struct{
    int id;
    char name[255];
    float gpa;
    university_detail uni;
}student_detail;

int main(){
    //create a list of student details to accommodate three students' details
    student_detail list[3];
    for (int i = 0; i < 3; ++i) {
        //Tell the user to put in details of the number i student
        //and put the details into the attribute of the structure saved in the list
        printf("Enter the name of the No.%d student:\n", i+1);
        scanf("%s", list[i].name);

        printf("\nEnter the ID of the No.%d student:\n", i+1);
        scanf("%d", &list[i].id);
        
        printf("\nEnter the GPA of the No.%d student:\n", i+1);
        scanf("%f", &list[i].gpa);
        
        printf("\nEnter the name of the university:\n");
        scanf("%s", list[i].uni.name);

        printf("\n");
    }
    //Print the details of each student by calling their attributes from the list
    for (int i = 0; i < 3; ++i) {
        printf("Student %s with ID %d and GPA %.2f is studying at %s.\n", list[i].name, list[i].id, list[i].gpa, list[i].uni.name);
    }
    

    return 0;
}
