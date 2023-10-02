//
// Created by Admin on 10/2/2023.
//

#include <stdio.h>

int main()
{
    int arr[6];
    int i, max, min;
    arr[0] = 1;
    arr[1] = 10;
    arr[2] = 100;
    arr[3] = 1000;
    arr[4] = 10000;
    arr[5] = 100000;
    for (i = 0; i < 6; i++)
        printf("%d\n", arr[i]);
    max = arr[0];
    for (i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        max = arr[i];
    }
    printf("\nThe highest value is: %d", max);
    min = arr[5];
    for (i = 5; i >= 0; i--)
    {
        if (arr[i] < min)
        min = arr[i];
    }
    printf("\nThe smallest value is: %d", min);
}