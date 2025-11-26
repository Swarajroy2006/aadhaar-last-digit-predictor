#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Correct Verhoeff multiplication table
int d[10][10] = {
    {0,1,2,3,4,5,6,7,8,9},
    {1,2,3,4,0,6,7,8,9,5},
    {2,3,4,0,1,7,8,9,5,6},
    {3,4,0,1,2,8,9,5,6,7},
    {4,0,1,2,3,9,5,6,7,8},
    {5,9,8,7,6,0,4,3,2,1},
    {6,5,9,8,7,1,0,4,3,2},
    {7,6,5,9,8,2,1,0,4,3},
    {8,7,6,5,9,3,2,1,0,4},
    {9,8,7,6,5,4,3,2,1,0}
};

// Permutation table
int p[8][10] = {
    {0,1,2,3,4,5,6,7,8,9},
    {1,5,7,6,2,8,3,0,9,4},
    {5,8,0,3,7,9,6,1,4,2},
    {8,9,1,6,0,4,3,5,2,7},
    {9,4,5,3,1,2,6,8,7,0},
    {4,2,8,6,5,7,3,9,0,1},
    {2,7,9,3,8,0,6,4,1,5},
    {7,0,4,6,9,1,3,2,5,8}
};

// Inverse table
int inv[10] = {0,4,3,2,1,5,6,7,8,9};

// Generate checksum (last digit)
int generateChecksum(char num[]) {
    int c = 0;
    int len = strlen(num);

    for(int i = len - 1, pos = 0; i >= 0; i--, pos++) {
        c = d[c][ p[(pos + 1) % 8][ num[i] - '0' ] ];
    }
    return inv[c];
}

int main() {
    char input[20];
    
    printf("Enter first 11 digits of Aadhaar: ");
    scanf("%s", input);

    if(strlen(input) != 11) {
        printf("Input must be exactly 11 digits!\n");
        return 0;
    }

    for(int i = 0; i < 11; i++) {
        if(!isdigit(input[i])) {
            printf("Invalid! Only digits allowed.\n");
            return 0;
        }
    }

    int lastDigit = generateChecksum(input);

    printf("\nPredicted Checksum (Last Digit) = %d\n", lastDigit);
    printf("Predicted Valid Aadhaar Number = %s%d\n", input, lastDigit);

    return 0;
}
