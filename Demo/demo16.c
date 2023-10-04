//
// Created by Admin on 10/2/2023.
//

#include <stdio.h>

//int demo16_main ()
int main()
{
    int i;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x;
    printf("Nhap phan tu ban muon tim: \n");
    scanf("%d", &x);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == x)
            printf("Phan tu %d o vi tri %d", x, i);
    }
        if (arr[i] == 10)
            printf("Khong tim thay phan tu %d trong mang\n", x);
}