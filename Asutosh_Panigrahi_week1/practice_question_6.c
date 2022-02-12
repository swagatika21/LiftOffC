//. Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter any alphabet:\n ");
    scanf("%c", &alphabet);
	switch(alphabet){
        case 'a': 
            printf("it is a vowel\n");
            break;
        case 'e': 
            printf("it is a vowel\n");
            break;
        case 'i': 
            printf("it is a vowel\n");
            break;
        case 'o': 
            printf("it is a vowel\n");
            break;
        case 'u': 
            printf("it is a vowel\n");
            break;
        case 'A': 
            printf("it is a vowel\n");
            break;
        case 'E': 
            printf("it is a vowel\n");
            break;
        case 'I': 
            printf("it is a vowel\n");
            break;
        case 'O': 
            printf("it is a vowel\n");
            break;
        case 'U': 
            printf("it is a vowel\n");
            break;
        default: 
            printf("it is a consonant\n");
    }

    return 0;
}
