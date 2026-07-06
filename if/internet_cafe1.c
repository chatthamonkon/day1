//ร้านอินเตอร์เน็ตคาเฟ้คิดค่าบริการ15บาทต่อชั่วโมงทางร้านอยากดึงดดูดลูกค้าจึงเพิ่มระะบบสมาชิิกเสียค่าสมัค100บาทและจะได้ด้ส่วนลด10%จากค้าบริการ จงคำนวนค่าใช้จ่ายทั้งหมดต่อเดือนรระหว่างผู้ใช้บริการAและB โดยทั้งคู่ต่างก็ใช้บริการ50 ชั่วโมงต่อเดือนต่อเดือนที่ทั้งคู่ โดนที่AและBเป็นสมาชิคใครเสียค่าใช้จ่ายมากกว่ากัน
#include <stdio.h>
int main() {
    int A_hours = 50;
    int B_hours = 50;
    int membership_fee = 100;
    float hourly_rate = 15.0;
    float discount_rate = 0.10;

    float A_cost = membership_fee + (A_hours * hourly_rate * (1 - discount_rate));

    float B_cost = B_hours * hourly_rate;

    printf("Total cost for A (member): %.2f\n", A_cost);
    printf("Total cost for B (non-member): %.2f\n", B_cost);

    if (A_cost > B_cost) {
        printf("A spends more than B.\n");
    } else if (A_cost < B_cost) {
        printf("B spends more than A.\n");
    } else {
        printf("A and B spend the same amount.\n");
    }

    return 0;
}