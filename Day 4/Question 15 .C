#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for(int num = start; num <= end; num++) {
        int temp = num, digits = 0, result = 0, remainder;

        while(temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while(temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, digits);
            temp /= 10;
        }

        if(result == num)
            printf("%d ", num);
    }

    return 0;
}