/******************************************************************************
 * Họ và tên: [Lê Thành Phong]
 * MSSV:      [PS47422]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

//Tạo hàm 


int laNamNhuan(int nam) {
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1; // Là năm nhuận
    } else {
        return 0; // Không phải năm nhuận
    }
}

int main() {
    int nam;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (laNamNhuan(nam)) {
        printf("%d la nam nhuan\n", nam);
    } else {
        printf("%d khong phai la nam nhuan\n", nam);
    }

    return 0;
}

