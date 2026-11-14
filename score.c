#include <stdio.h>
int main () {

    int score;
    int grade;

    printf("enter your score:");

         
    if(scanf("%d", &score) != 1 ||score < 0 || score >100) {
        printf("Invalid must be 0-100.\n");
        return 1;
    
    }   

    if(score>70){
        grade='A';
    } 
    else if(score>60){
        grade='B';
    }
    else if(score>50){
        grade='C';
    } 
    else if(score>40){
        grade='D';
    }
    else {
        grade='E';
    }
    printf("your grade is %c\n", grade);
    return 0;
}
