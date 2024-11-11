/*Arjun has been learning about Armstrong numbers, also known as narcissistic numbers, in his mathematics class. An Armstrong number is a number that is equal to the sum of its digits each raised to the power of the number of digits. Arjun wants to write a program to determine whether a given number is an Armstrong number. 



Write a program to check if a given number is an Armstrong number and print the result.

Input format :
The input consists of a single integer, n, representing the number to be checked.

Output format :
If the number is an Armstrong number print "<number> is an Armstrong number."

Otherwise, print "<number> is not an Armstrong number.".*/


#include <stdio.h>
#include <math.h>

int main() {
    int number, original_number, num_digits = 0, armstrong_sum = 0, digit;
    
    // Input the number
    scanf("%d", &number);

    original_number = number; // Store the original number for comparison

    // Calculate the number of digits
    while (number > 0) {
        num_digits++;
        number /= 10;
    }

    number = original_number; // Restore the original number

    // Calculate the Armstrong sum
    while (number > 0) {
        digit = number % 10;
        armstrong_sum += pow(digit, num_digits);
        number /= 10;
    }

    // Check if the Armstrong sum is equal to the original number
    if (armstrong_sum == original_number) {
        printf("%d is an Armstrong number.\n", original_number);
    } else {
        printf("%d is not an Armstrong number.\n", original_number);
    }

    return 0;
}
