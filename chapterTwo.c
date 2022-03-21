# include<stdio.h>

int main() {
    /* Type Declaration Instructions */
    int age = 22;
    int oldAge = age;
    int newAge = oldAge + 2;
    // printf("New age is : %d", newAge);

    int taka = 1, dollar;
    dollar = 74;

    /*
    Order of declaration is important - Wrong Declaration Order
    float pi = 3.14;
    float area = pi * rad * rad;
    float rad =3;
     */

    // valid declaration
    int age1, age2, age3;
    age1 = age2 = age3 = 22;

    // Invalid

    // int a1 = a2 = a3 = 22;

    // Arithmetic Instructions

    int a = 1, b = 2, c = 3;

    // Valid
    a = b + c;

    // Invalid
    // b + c = a;

    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);

    // Type Conversion
    printf("sum of 2 & 3 : %d", 2 + 3);
    printf("sum of 2.0 & 3 : %f", 2.0 + 3);
    printf("sum of 2.0 & 3.0 : %f", 2.0 + 3.0);

    // Associativity
    printf("Output : %d", 5 + 2 / 2 * 3);


    // Relational Operator
    printf("%d \n", 4==4);
    printf("%d \n", 4<3);
    printf("%d \n", 3<4);
    printf("%d \n", 4<4);
    printf("%d \n", 4<=4);

    printf("%d \n", 4>3);
    printf("%d \n", 3>4);
    printf("%d \n", 4>4);
    printf("%d \n", 4>=4);
    printf("%d \n", 4>=4);
    printf("%d \n", 4>=4);


    printf("%d \n", 4!=4);
    printf("%d \n", 4!=4);

// Logical Operator

    printf("%d \n", 3 < 4 && 3 < 5);
    printf("%d \n", 3 < 4 && 5 < 4);

    
    printf("%d \n", 3 < 4 && 5 < 4);
    printf("%d \n", 3 > 4 && 5 > 4);
    printf("%d \n", 3 < 4 && 3 < 5);


    printf("%d \n", !(3 < 4 && 3 < 5));
    printf("%d \n", !(4 < 3 || 5 < 3));

    // Assignment Operator
    int a = 10;

    a += 10;
    printf("a+10 = %d \n", a);
    a -= 10;
    printf("a-10 = %d \n", a);
    a *= 10;
    printf("a*10 = %d \n", a);
    a /= 10;
    printf("a/10 = %d \n", a);
    a %= 10;
    printf("a%10 = %d \n", '%', a);

    return 0;
}