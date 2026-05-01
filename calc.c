#include <stdio.h>
#include <string.h>

int main(){
    printf("Simple calculator made in C by Fluffy.\n");
    float firstNum;
    float lastNum;
    printf("\nEnter first number: ");
    scanf("%f", &firstNum);
    printf("\nEnter second number: ");
    scanf("%f", &lastNum);
    printf("\nEnter type of calculation, '+', '-', '*', '/'. ");
    char calc[20];
    scanf("%s",calc);
if (strcmp(calc, "+") == 0){
    float result = firstNum + lastNum;
    printf("%.1f", result);
}
else if (strcmp(calc, "-") == 0){
    float result = firstNum - lastNum;
    printf("%.1f", result);
}
     else if (strcmp(calc, "*") == 0){
    float result = firstNum * lastNum;
    printf("%.1f", result);
    }
    else if (strcmp(calc, "/") == 0){
    float result = firstNum / lastNum;
    printf("%.1f", result);
    }
    else{
    printf("Error\n");
    printf("%f\n", firstNum);
    printf("%f\n", lastNum);
    printf("%s\n", calc);
    }
    return 0;
}
