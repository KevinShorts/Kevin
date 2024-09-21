// Ứng dụng tính toán chỉ số sức khỏe.
// BMI Calcuator
// Metric Units
# include <stdio.h>

int main() {
  printf("= = = = = = = = = = = = = = = = = = = = = = = = = =");
  printf("\nWelcome to BMI Calculator.");
  printf("\n= = = = = = = = = = = = = = = = = = = = = = = = = =");
  printf("\nPlease enter your name: ");
  float weight, height, bmi;
  char gender;
  char name[100];
  scanf("%s", name);
  printf("Please enter your weight (kg): ");
  scanf("%f", &weight);
  printf("Please enter your height (cm): ");
  scanf("%f", &height);
  height = height / 100;
  printf("Please enter your gender (M/F): ");
  scanf(" %c", &gender);
  bmi = weight / (height * height);
  printf("\nHere is your information. \n");
  printf("\nYour name is %s", name);
  printf("\nYour weight is %.2f kg", weight);
  printf("\nYour height is %.2f cm", height);
  printf("\nYour gender is %c\n", gender);
  printf("\nHere is the result.\n");
  printf("\nYour BMI is: %.2f kg/m^2", bmi);
  if (bmi < 18.5) {
    printf("\nYou are underweight.");
  } else if (bmi >= 18.5 && bmi <= 24.9) {
    printf("\nYou are normal.");
  } else if (bmi >= 25 && bmi <= 29.9) {
    printf("\nYou are Obese (Class 1).");
  } else if (bmi >= 30 && bmi <= 34.9) {
    printf("\nYou are Obese (Class 2).");
  } else {
    printf("\nYou are Obese (Class 3 or serve obesity).");
  }
  return 0;
}
