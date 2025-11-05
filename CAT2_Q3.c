//simple C program 
/*
Name: MBUGUA PETER WAWERU 
REG NO: CT100/G/26268/25
DESCRIPTION: file 
*/

#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, i;
    float average;
    
    // Task 1: Input 10 integers and save to input.txt
    file = fopen("input.txt", "w");
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }
    fclose(file);
    
    // Task 2: Read numbers, calculate sum and average, save to output.txt
    file = fopen("input.txt", "r");
    for(i = 0; i < 10; i++) {
        fscanf(file, "%d", &num);
        sum += num;
    }
    fclose(file);
    
    average = sum / 10.0;
    
    file = fopen("output.txt", "w");
    fprintf(file, "Sum: %d\n", sum);
    fprintf(file, "Average: %.2f\n", average);
    fclose(file);
    
    // Task 3: Display both files
    printf("\ninput.txt:\n");
    file = fopen("input.txt", "r");
    for(i = 0; i < 10; i++) {
        fscanf(file, "%d", &num);
        printf("%d\n", num);
    }
    fclose(file);
    
    printf("\noutput.txt:\n");
    file = fopen("output.txt", "r");
    char line[100];
    while(fgets(line, 100, file)) {
        printf("%s", line);
    }
    fclose(file);
    
    return 0;
}