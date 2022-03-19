# include<stdio.h>

int main(){

    int age = 23;
    printf("My age is %d \n", age);

    float pi = 3.14;
    printf("Pi value is %f \n", pi);

    char star = '*';
    printf("Star is %c \n", star);

    int roll;
    printf("enter roll");
    scanf("%d", &roll);
    printf("roll is : %d \n", roll);

    int a, b;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter b");
    scanf("%d", &b);

    // int sum = a + b;
    printf("sum is : %d", a+b);

    return 0;
}