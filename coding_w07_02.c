#include <stdio.h>

int main() {
    int x, y;

    // รับค่าจากผู้ใช้
    printf("กรอกค่า x: ");
    scanf("%d", &x);
    printf("กรอกค่า y: ");
    scanf("%d", &y);

    // เปรียบเทียบค่า
    if (x > y) {
        printf("x มากกว่า y\n");
    } else if (x < y) {
        printf("x น้อยกว่า y\n");
    } else {
        printf("x เท่ากับ y\n");
    }

    return 0;
}