#include<stdio.h>
int main()
{
    void newPrint(char * char1)
{    printf("%s\n", char1);
}
int sum(int a, int b)
{
    return a+b;

}
int average(int a, int b)
{
    return (a+b)/2;
}

    printf("%d \n", sum(10,20));
    printf("%d\n", average(20,20));


int main()
{
    int arr[5]= {0,1,2,3,4};
    
    for (int i=0; i<5; i++)
    {
        printf("enter the array number%d\n",i);
        scanf("%d\n", &arr);
    }
    printf(arr[5]);
    return 0;
}

int main()
{
    int a= 2;
    printf("%d\n",a);
    int *ptr=NULL;
    ptr=&a;
    *ptr=5;
    printf("%d\n",a);
}
}
