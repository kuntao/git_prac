#include <stdio.h>


int main(void) {
  
  int i;

  for(i = 0; i < 10; i++) {
    printf("%d\n", i*3);
  }

  for(i = 0; i < 52; i++) {
    printf("%c\n", i + 'A');
  }

  return 0;
}