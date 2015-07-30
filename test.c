#include <stdio.h>


int main(void) {
  
  int i;

  for(i = 0; i < 100; i++) {
    printf("%d", i*3);
  }

  for(i = 0; i < 52; i++) {
    printf("%c", i + 'A');
  }

  return 0;
}