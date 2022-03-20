# include<stdio.h>

int main(){

    /* First Program */
    printf("Hello World");

    /* Variables & Data Types + Constants & Keyword */
    int number;
    int age;
    int price;

    int age = 22;
    float pi = 3.14;
    char percentage = '%';

    /* Output */
    printf("age is %d", age);
    printf("Pi is %f", pi);
    printf("Character is %c", percentage);

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

    int sum = a + b;
    printf("sum is : %d", a+b);



/* Write a program to calculate area of a circle.
(Side is given)
 */
    float side;
    printf("Enter a side");
    scanf("%f", &side);
    printf("Your area is: %f", side * side);


    /* Write a program to calculate area of a circle.
    (radius is given)
     */

    float radius;
    printf("Enter a Radius");
    scanf("%f", &radius);
    printf("Your area of a circle : %f", 3.14 * radius * radius);

    return 0;
}