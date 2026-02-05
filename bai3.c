/******************************************************************************
 * Họ và tên: [Lê Thành Phong]
 * MSSV:      [PS47422]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

//Tạo hàm hoán vị sử dụng con trỏ
void hoanVi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    //Nhập 2 giá trị a,b từ bàn phím
    printf("Nhap gia tri a: "); 
    scanf("%d", &a);
    printf("Nhap gia tri b: "); 
    scanf("%d", &b);

    //Gọi hàm trong hàm main     
    hoanVi(&a, &b);
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);

    return 0;
}

