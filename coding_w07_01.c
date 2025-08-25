#include <stdio.h>

int main() {
    float score = 65;   // กำหนดคะแนนสอบ midterm
    float final_score;

    if (score >= 50) {
        final_score = score * 1.05;   // คิด 5% ของคะแนนที่ได้จริง
    } else {
        final_score = score;
    }

    printf("Final score: %.2f\n", final_score);
    printf("End of evaluation\n");

    return 0;
}
