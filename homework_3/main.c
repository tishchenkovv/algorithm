//
//  main.c
//  lesson_3
//
//  Created by Тищенко Виталий Викторович on 04/10/2018.
//  Copyright © 2018 Тищенко Виталий Викторович. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>


void swap(int *array_sort, int j)
{
    int temp = array_sort[j];
    array_sort[j] = array_sort[j + 1];
    array_sort[j + 1] = temp;
}

void sort()
{
    int size = 10;
    int array_sort[10] = {10,9,8,7,6,5,4,3,2,1};

    
    
    int temp; // временная переменная для обмена элементов местами
    
    for (int i = 0; i< 10; i++)
    {
        bool flag = true;
        for (int j = 0; j < 10 - (i+1); j++) {
            
            if (array_sort[j] > array_sort[j+1] )
            {
                
                flag = false;
                temp = array_sort[j];
                array_sort[j] = array_sort[j + 1];
                array_sort[j + 1] = temp;
            }
         
        }
        if (flag)
        {
            break;
        }
    }

    for (int i = 0; i < size; i++) {
        printf("i = %d\t",array_sort[i]);
    }

}


void ShakerSort()
{
    int size = 10;
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    
    int leftMark = 1;
    int rightMark = size - 1;
    while (leftMark <= rightMark)
    {
        for (int i = rightMark; i >= leftMark; i--)
            if (arr[i - 1] > arr[i]) swap(arr, i);
        leftMark++;
        
        
        for (int i = leftMark; i <= rightMark; i++)
            if (arr[i - 1] > arr[i]) swap(arr, i);
        rightMark--;
        
    }
    
    for (int i = 0; i < size; i++) {
        printf("i = %d\t",arr[i]);
    }
    
}


void search()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int N = 10;
    int value;
    printf("Input value for search:");
    scanf("%i",&value);
    int L = 0, R = N - 1;
    int m = L + (R  - L) / 2;
    while(L <= R && a[m] != value)
    {
        if (a[m] < value)
            L = m + 1;
        else
            R = m - 1;
        m = L + (R - L) / 2;
    }
    if (a[m] == value)
        printf("Index:%d Value:%d", m, a[m]);
    else
        printf("Value not found");
}

int main(int argc, const char * argv[]) {
 
    printf("Sort arrays");

    
    // Begin Exercise 1
    //sort();
    // End Exercise 1
    
    system('cls');
    
    // Begin Exrcise 2
   // ShakerSort();
    // End Exercise 2
    
    // Begin Exercise 3
    search();
    // End Exercise 3
    
    return 0;
}
