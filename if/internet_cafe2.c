//ร้านอินเตอร์เน็ตคาเฟ่ร้านหนึ่งคิดค่าใช้บริการ 15 บาทต่อชั่วโมง ทางร้านต้องการดึงดูดลูกค้าที่ใช้อินเตอร์เน็ตหรือ เล่นเกมส์มาก จึงมีระบบสมาชิกร้านซึ่งผู้สมัครสมาชิกจะเสียค่าสมาชิก 100 บาทต่อเดือนและจะได้ส่วนลด 10% จาก ค่าบริการ โดยเฉลี่ยแล้วเด็กชายต้นจะไปใช้บริการที่ร้านอินเตอร์เน็ตทุกวัน วันละสองชั่วโมง สมมติให้แต่ละเดือนมี 30 วัน จงหาว่าเด็กชายต้นควรจะสมัครสมาชิกร้านอินเตอร์เน็ตนี้หรือไม่
#include <stdio.h>
int main() {
    int hours_per_day = 2;
    int days_per_month = 30;
    int total_hours = hours_per_day * days_per_month;
    float hourly_rate = 15.0;
    float membership_fee = 100.0;
    float discount_rate = 0.10;

    float cost_without_membership = total_hours * hourly_rate;
    float cost_with_membership = membership_fee + (total_hours * hourly_rate * (1 - discount_rate));

    printf("Total cost without membership: %.2f\n", cost_without_membership);
    printf("Total cost with membership: %.2f\n", cost_with_membership);

    if (cost_with_membership < cost_without_membership) {
        printf("It is better for Ton to become a member.\n");
    } else {
        printf("It is not worth it for Ton to become a member.\n");
    }

    return 0;
}