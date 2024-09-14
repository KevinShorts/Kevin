// Ứng dụng tính toán chỉ số sức khỏe.
// BMI Calculator
// Metric Units

#include <stdio.h>

int main() {
  float height, weight, bmi;
  printf("Enter your height in meters: ");
  scanf("%f", &height);
  printf("Your height is %.2f m\n", height);
  printf("Enter your weight in kilograms: ");
  scanf("%f", &weight);
  printf("Your weight is %.2f kg\n", weight);
  bmi = weight / (height * height);
  printf("Your BMI is %f kg/m^2\n", bmi);
  if (bmi < 18.5) {
    printf("You are underweight\n");
  } else if(bmi >= 18.5 && bmi < 25) {
    printf("You are normal weight\n");
  } else if(bmi >= 25 && bmi < 30) {
    printf("You are overweight\n");
  } else {
    printf("You are obese\n");
  }
}