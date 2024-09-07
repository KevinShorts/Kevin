// Ứng dụng tính toán chỉ số sức khỏe.
#include <stdio.h>

int main() {
  float cannang, chieucao, bmi;
  printf("Nhap can nang: ");
  scanf("%f", &cannang);
  printf("Nhap chieu cao: ");
  scanf("%f", &chieucao);
  bmi = cannang / (chieucao * chieucao);
  printf("Chi so BMI cua ban la: %.2f\n", bmi);
  if (bmi < 18.5) {
    printf("Ban gay qua\n");
  } else {
    if (18.5 <= bmi && bmi < 25) {
      printf("Ban binh thuong\n");
    } else {
      if (25 <= bmi && bmi < 30) {
        printf("Ban hoi beo\n");
      }
    }
  }
  return 0;
}