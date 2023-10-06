//
// Created by Admin on 10/6/2023.
//

#include <stdio.h>

//int demo20_main ()
int main()
{
    int i, n;
    int count = 0;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    float marks[n];
    for (i = 0; i < n; i++)
    {
        printf("Diem cua sinh vien %d: ", i+1);
        scanf("%f", &marks[i]);
        if (marks[i] < 5)
            count++;
    }
    printf("So sinh vien truot mon: %d", count);
    return 0;
}