#include <stdio.h>
    int main()
{
    //comment single line comment

    /*this is a multi
    line comment */
    // data type
    // int, char, float,
    // ''= represent character
    // ""= represent string
    /*%d print's integer "4 byte "
      %f print's float "4 byte"
      %c print's character "1byte  "*/ 


    int a=20;
    float b=5.3;
    char c='a';
    printf("\n hello how are you %d");
    printf("\n hello how are you %f");
    printf("\n hello how are you %c");

    printf("here is the size of int\n", sizeof(int ));

    int this=4 ; //variable declaration and initilization
    const int i=10;

    /*Type of operators

    logical operators
    arthemetic operators = 
    bitwise operators
    misclaneous operator
    assignment operators*/
     int a=6, b=7, c=8;
     printf( "the sum of a and b is\n", a+b);
     printf( "the substraction of a and b is\n", a-b);
     printf( "the division of a and b is\n", a%b);
    return 0;
}



