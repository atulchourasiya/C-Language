//A  5*2 - 2*3
//B  5*2 / 2*3
//B  5*(2 / 2)*3
//B  5+2 / 2*3

#include<stdio.h>
int main()
{
printf("%d", 5*2 -2*3);// multiple has higher precedence
printf("%d", 5*2 / 2*3);// multiple and divide both has same precedence goes left to right
printf("%d", 5*(2 / 2)*3);// Bracket has highest precedence
printf("%d", 5+ 2 / 2 *3);// Divide has highest precedence
return 0;
}