#include<stdio.h>
int main()
{
    // arithmetic oprator
    int a=10, b=20, c=30;
    printf("This is the result of addition %d \n", a+b);
    printf("This is the result of substraction %d \n", a-b);
    printf("This is the result of division %d \n", a%b);
    printf("This is the result of multiplication %d \n", a*b);
    printf("This is the result of increment %d \n", ++a);
    printf("This is the result of decrement %d \n", --a );

    // relational oprator 0 for true 1 for false
    int one=1, two=2;
    printf("%d\n", one==two);
    printf("%d\n", one!=two);
    printf("%d\n", one<=two);
    printf("%d\n", one>=two);

    // logical operators
    int h=0, i=2;
    printf("logical operator return %d\n", h&&i);
    printf("logical operator return %d\n", h||i);
    printf("logical operator return %d\n", !i);
    printf("logical operator return %d\n", !h);
    
    // Bitwise operator
    int A= 10, B=13;
    printf("bitwise and  operator  returns %d \n", A&B);
    printf("bitwise or operator  returns %d \n", A|B);
    printf("bitwise xor operator  returns %d \n", A^B);
    printf("bitwise ones operator  returns %d \n", ~B);
    printf("bitwise left operator  returns %d \n", A<<B);
    printf("bitwise right operator  returns %d \n", A>>B);

    //Assignment operator
    // +- , =,+=, -=, *=, %=
    int ab=10;
    ab +=8;
    printf("ab is %d \n", ab);
    ab -=8;
    printf("ab is %d \n", ab);
    ab =8;
    printf("ab is %d \n", ab);
    ab +-8;
    printf("ab is %d \n", ab);
    
return 0;
} 
