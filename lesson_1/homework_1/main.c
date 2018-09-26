//
//  main.c
//  homework-1
//
//  Created by Тищенко Виталий Викторович on 24.09.2018.
//  Copyright © 2018 Тищенко Виталий Викторович. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float index_fat()
{
    system("cls");
    
    float growth    = 0;
    float weight    = 0;
    float result    = 0;
    
    printf("Please enter growth\n");
    scanf("%f,2",&growth);

    printf("Please enter weight\n");
    scanf("%f",&weight);
    
    if (growth !=0 && weight != 0)
    {
   result = weight / (growth *growth);
    }
    
    return result;
    
}


void compare_numbers()
{
   
    float x1 = 0;
    float x2 = 0;
    float y1 = 0;
    float y2 = 0;
    
    float temp_1,temp_2,result;
    
    printf("Please number 1\n");
    scanf("%f",&x1);
    
    printf("Please number 2\n");
    scanf("%f",&x2);
    
    printf("Please number 3\n");
    scanf("%f",&y1);
    
    printf("Please number 4\n");
    scanf("%f",&y2);
    
    system("cls");

    temp_1 = x1 > x2? x1:x2;
    temp_2 = y1 > y2? y1:y2;
    
    result = temp_1 > temp_2? temp_1:temp_2;
    
    printf("Max value number = %f", result);
    
}

void swap()
{
    system("cls");
    
    int a = 0;
    int b = 0;
    int c = 0;
    
    printf("Enter value 1\n");
    scanf("%d",&a);
    
    printf("Enter value 2\n");
    scanf("%d",&b);
    
    if (a != 0 && b != 0)
    {
        c = a;
        a = b;
        b = c;
    
        printf("result swap a = %d b = %d",a,b);
    }
}

void swap_1()
{
    
    system("cls");
    
    int a = 0;
    int b = 0;

    printf("Enter value 1\n");
    scanf("%d",&a);
    
    printf("Enter value 2\n");
    scanf("%d",&b);
    
    if (a != 0 && b != 0)
    {

        a = a + b;
        b = a - b;
        a = a - b;
        
        printf("result swap a = %d b = %d",a,b);
    }

}

void calculate_square_root()
{
    
    system('cls');
    
    int a, b, c, d;
    float x1, x2;
    
    printf("Please coff 1\n");
    scanf("%d",&a);
    
    printf("Please coff 2\n");
    scanf("%d",&b);
    
    printf("Please coff 3\n");
    scanf("%d",&c);
    
    d = b*b - 4*a*c;

    
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        
        if (x1 == x2)
        {
        
            printf("square root %f", x1);
        }
        else
        {
             printf("square root x1 =  %f", x1);
             printf("square root x2 =  %f", x2);
        }
        
    }
    else
    {
        printf("Empty square root");
    }

}

void enter_moth()
{
    system("cls");
    
    int m;
    
    printf("Please enter month number\n");
    scanf("%d",&m);
    
    if (m == 12)
    {
        printf("Winter");
        return;
    }
    
    const float x1 = 0.33;
    const float x2 = 0.67;
  
    int result = round(x1 * m + x2);
    
    switch (result)
    {
        case 1:
            printf("Winter");
            break;
        case 2:
            printf("Spring");
            break;
        case 3:
            printf("Summer");
            break;
        case 4:
            printf("Autumn");
            break;
            
        default:
            break;
    }
    
}

void age()
{
    system("cls");
    
    printf("Enter age..\n");
    int year, t1, t2;
    scanf("%d",&year);
    t1 = year % 10;
    t2 = year % 100;
    
    if(t1 == 1 && t2 != 11)
    {
        printf("%d год",year);
        
    }
    else if(t1 >= 2 && t1 <= 4 && (t2 < 10 || t2 >= 20))
    {
        printf("%d года",year);
        
    }
    else
    {
        printf("%d лет",year);
        
    }
    
}

void compare_three_number()
{
    system('cls');
    int x1,x2,x3,temp_1,temp_2 = 0;
    
    printf("Please enter value_1\n");
    scanf("%d",&x1);
    
    printf("Please enter value_2\n");
    scanf("%d",&x2);
    
    printf("Please enter value_3\n");
    scanf("%d",&x3);
    
    temp_1 = x1 > x2? x1:x2;
    temp_2 = temp_1 > x3? temp_1:x3;
    
    printf("Max value = %d", temp_2);
    
}


void rand_number()
{
    system('cls');
    printf("%d\n", rand());
}

void rand_number_1()
{
    system('cls');
    int a,b,c,d,pass;
    
    a = 23;
    b = 45;
    c = 1;
    pass = 100;
    d = 1;
    for (int i = 0; i < pass; i++)
    {
        d = (d * a + d ) % pass;
        printf("i = %d \t \t number = %d\n",i,d);
        
    }
    
}


int main(int argc, const char * argv[]) {
    printf("Homework_1\n");
    
    // Begin Exercise 1
    //float result_01 = index_fat();
    
    //printf("\n");
   // printf("Index body %3.5f", result_01);
    
    // End Exercise 1
    
    // BEGIN Exercise 2
    //compare_numbers();
    // END Exercise 2
    
    // Begin Exercise 3
   // swap();
    //swap_1();
    // End Exercise 3
    
    // Begin Exercise 4
    //calculate_square_root();
    // End Exercise
    
    // Begin Exercise 5
    //enter_moth();
    // End Exercise
    
    // Begin Exercise 6
   // age();
    // End Exercise 6
    
    // Begin Exercise 12
    //compare_three_number();
    // End Exercise 12
    
    // Begin Exercise 13
   // rand_number();
    rand_number_1();
    // End Exercise 13
    
    
    return 0;
}






