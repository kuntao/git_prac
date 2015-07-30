#include <stdio.h>


int main(void) {
  
  int i;

  for(i = 0; i < 10; i++) {
    printf("%d\n", i*3);
  }

  for(i = 0; i < 26; i++) {
    printf("%c", i + 'a');
  }

  return 0;
}