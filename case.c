#include <stdio.h>

void convert_to_lowercase(char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += 32;
    }
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  scanf("%s", str);

  convert_to_lowercase(str);

  printf("The lowercase string is: %s\n", str);

  return 0;
}
