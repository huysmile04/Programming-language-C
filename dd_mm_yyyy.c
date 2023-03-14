#include <stdio.h>

int main() {
    int day, month, year, day_of_week;

    // Nhập ngày, tháng, năm từ người dùng
    printf("Nhập ngày tháng năm (dd:mm:yyyy): ");
    scanf("%d:%d:%d", &day, &month, &year);

    // Áp dụng thuật toán Zeller's Congruence để tính thứ của ngày đó
    if (month < 3) {
        month += 12;
        year--;
    }
    day_of_week = (day + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    // In ra kết quả
    switch(day_of_week) {
        case 0:
            printf("Chủ nhật");
            break;
        case 1:
            printf("Thứ hai");
            break;
        case 2:
            printf("Thứ ba");
            break;
        case 3:
            printf("Thứ tư");
            break;
        case 4:
            printf("Thứ năm");
            break;
        case 5:
            printf("Thứ sáu");
            break;
        case 6:
            printf("Thứ bảy");
            break;
    }

    return 0;
}
