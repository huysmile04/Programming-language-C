#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int day, month, year;
    printf("Enter a date (dd:mm:yyyy): ");
    scanf("%d:%d:%d", &day, &month, &year);

    // Chuyển đổi ngày nhập vào thành số giây tính từ Epoch
    time_t t = time(NULL);
    struct tm input_time = {0};
    input_time.tm_year = year - 1900;
    input_time.tm_mon = month - 1;
    input_time.tm_mday = day;
    t = mktime(&input_time);

    // Chuyển đổi số giây thành struct tm và lấy thứ trong tuần
    struct tm *result_time = localtime(&t);
    char *day_of_week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("The date %02d:%02d:%04d is a %s\n", day, month, year, day_of_week[result_time->tm_wday]);
    return 0;
}
