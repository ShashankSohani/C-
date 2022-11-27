#include<stdio.h>
int main()
{
    //input using scanf
    int file_input;
    printf("enter the value of file \n");
    scanf("%d\n", &file_input);
    printf("You have eneterd %d \n",file_input);
    
    //decision making statement
    int age=scanf("%d",age);
    if (age<=18)
    {
        printf("you can't drive\n");
    }
    else
    {
        printf("you can driver\n");
    }   

    //while loop
    int index=0;
    while (index<10)
        {
            printf("%d\n", index);
            index++;
        }
    
    //for loop
    for (int j=0; j<6; j++)    
    {
        printf("%d \n",j);
    }
    
    //dowhile loopp
        do
    {
        printf("dowhile is running");
    } while (j>44);

    
        return 0;

} 
