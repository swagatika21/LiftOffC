#include <stdio.h>

int Even(int n)
{
    return !(n & 1);
}


int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(Even(n))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}
