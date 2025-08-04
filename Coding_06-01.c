#include <stdio.h>

int main() {
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // 1. แสดงค่าเริ่มต้นของตัวแปรทั้งหมด
    printf("a = %d, b = %d, c = %.2f, d = %.2f\n", a, b, c, d);

    // 2. ผลการคำนวณของ d + a
    printf("d + a = %.2f\n", d + a); // float + int -> float

    // 3. ผลการคำนวณของ a - b
    printf("a - b = %d\n", a - b); // int - int -> int

    // 4. ผลการคำนวณของ c * d
    printf("c * d = %.2f\n", c * d); // float * float -> float

    // 5. ผลการคำนวณของ a * c
    printf("a * c = %.2f\n", a * c); // int * float -> float

    // 6. ผลการคำนวณของ c / d
    printf("c / d = %.2f\n", c / d); // float / float -> float

    // 7. ผลการคำนวณของ b / c
    printf("b / c = %.2f\n", b / c); // int / float -> float

    // 8. ผลการคำนวณของ a %% b
    printf("a %% b = %d\n", a % b); // int % int -> int

    // 9. ผลการคำนวณของ c %% a
    // printf("c %% a = ???\n", c % a); 
    //  Error: % ใช้ได้เฉพาะกับ int เท่านั้น

    // 10. ผลการคำนวณของ c %% d
    // printf("c %% d = ???\n", c % d); 
    //  Error: % ใช้ได้เฉพาะกับ int เท่านั้น

    return 0;
}
// อธิบายผลลัพธ์ 
// ค่าเริ่มต้น: แสดงค่าของตัวแปรทั้งหมด
// d + a: เป็นการบวก float + int ผลลัพธ์ถูกแปลงเป็น float
// a - b: เป็นการลบ int - int ผลลัพธ์เป็น int
//c * d: คูณ float * float ผลลัพธ์เป็น float
// a * c: คูณ int * float ผลลัพธ์เป็น float
// c / d: หาร float / float ผลลัพธ์เป็น float
// b / c: หาร int / float ผลลัพธ์เป็น float
// a % b: ใช้ % ได้เพราะทั้งคู่เป็น int
// c % a และ c % d: Error เพราะ % ใช้กับ int เท่านั้น (แก้ได้โดยการแปลงชนิดเป็น int ก่อน) 
