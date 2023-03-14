/*
    Title: Ceaser Cipher in C
    description: takes in plain text and gives back a cipher using Ceaser Cipher
    Usage:  Please enter the plan text you want to encrypt: defend
            The ciphered text is with (key shift = 1): efgfoe

    How it works:   Suposse letter: a=0, b=1, c=2, d=3, e=4, etc.
                    key = 1
                    ((int)letter + key) mod 26 ==> returns the cipherd letter as a number, cipherValue
                                                => (char)cipherValue = '[some letter]'

                                                NOTE: ASCII 'a' = 97, 'b'=98, 'c'=99, 'd'=100, etc.
*/


#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void caeserCipher(char* plainText, int key);

int main(void) {

    int key = 1;
    char plainText[101];
    
    printf("Please enter the plain text you want to encrypt: ");
    fgets(plainText, sizeof(plainText), stdin);
    printf("The ciphered text is : ");
    caeserCipher(plainText, key);

    //Uncomment if your using Winsdows
    //system("pause")
}

void caeserCipher(char* plainText, int key){
    int i = 0;
    int cipherValue;
    char cipher;

    while(plainText[i] != '\0' && strlen(plainText) - 1 > i){
        cipherValue = ((int) plainText[i]  - 97 + key) % 26 + 97;
        cipher = (char)(cipherValue);

        printf("%c", cipher);
        i++;
    }
    printf("\n");
}
