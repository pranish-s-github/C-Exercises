#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch, s[99], sen[99];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n"); //so this line is basically used to eat the previous printf's (#) \n?
    scanf("%[^\n]%*c", sen); // takes in everything until \n and the \n is eaten by the %*c
    
    printf("%c\n", ch);
    printf("%s\n", s); // (#)
    printf("%s", sen);
    return 0;
}