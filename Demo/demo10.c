//
// Created by Admin on 9/25/2023.
//

#include <stdio.h>

//int demo10_main()
int main()
{
    int count = 0;
    float total = 0;
    char choice;
    char namedrink[150];
    float price;

    do {
        printf("Nhap ten do uong ban muon order: ");
        scanf("%s", namedrink);
        printf("\nNhap gia cua do uong: ");
        scanf("%f", &price);
        total += price;
        count++;
        printf("\nBan co muon order tiep khong? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    if (count > 0) {
        double average = total;
        printf("\nHoa don cua ban ne: %.2lf\n", average);
    } else {
        printf("\nLoi, chung toi khong nhan duoc order cua ban. Vui long thu lai!\n");
    }

    return 0;
}