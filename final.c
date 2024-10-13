// Ứng dụng tính toán chỉ số sức khỏe.
// BMI Calculator
#include <stdio.h>

int main() {
  float weight, height, bmi;
  char gender;
  printf("= = = = = = = = = = = = = = = = = = = = = = = = = =");
  printf("\nWelcome to BMI Calculator.");
  printf("\n= = = = = = = = = = = = = = = = = = = = = = = = = =");
  printf("\nPlease fill in the form below.");
  printf("\nEnter your name: ");
  char name[100];
  scanf("%s", name);
  printf("Enter your gender (M/F): ");
  scanf(" %c", &gender);
  printf("Enter your weight (kg): ");
  scanf("%f", &weight);
  printf("Enter your height (m): ");
  scanf("%f", &height);
  bmi = weight / (height * height);
  printf("= = = = = = = = = = = = = = = = = = = = = = = = = =");
  printf("\nHere is your information:");
  printf("\nName: %s", name);
  printf("\nGender: %c", gender);
  printf("\nWeight: %.2f kg", weight);
  printf("\nHeight: %.2f m", height);
  printf("\n= = = = = = = = = = = = = = = = = = = = = = = = = =");
  printf("\nHere is the result:");
  printf("\nBMI: %.2f kg/m^2", bmi);
  if (bmi < 18.5) {
    printf("\nYou are underweight.");
  } else if (bmi >= 18.5 && bmi < 25) {
    printf("\nYou are normal weight.");
  } else if (bmi >= 25 && bmi < 30) {
    printf("\nYou are overweight.");
  } else {
    printf("\nYou are obese.");
  }
  printf("\n= = = = = = = = = = = = = = = = = = = = = = = = = =");
  return 0;
}