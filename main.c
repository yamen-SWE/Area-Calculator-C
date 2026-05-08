#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float num1,num2,area;
    printf("1-Square\n2-Rectangular\n3-Triangle\n");
    printf("What area do you want to enter ? ");
    scanf("%d",&choice);
    switch(choice){
        case 1 :
            printf("Insert one side of the square : ");
            scanf("%f",&num1);
            area = num1*num1;
            printf("The area of the square is %.2f\n",area);
            break;
        case 2 :
            printf("Enter the length of the rectangle : ");
            scanf("%f",&num1);
            printf("Enter the width of the rectangle : ");
            scanf("%f",&num2);
            area = num1*num2;
            printf("The area of the rectangle is %.2f\n",area);
            break;
        case 3 :
            printf("Enter the base of the triangle : ");
            scanf("%f",&num1);
            printf("Enter the height of the triangle : ");
            scanf("%f",&num2);
            area = 0.5*num1*num2;
            printf("The area of the triangle is %.2f\n",area);
            break;
        default :
            printf("Invalid number!\n");
            printf("Try Again.\n");
    }
    return 0;
}
