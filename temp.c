#include "pi_dht_read.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int pin;
  float temp, hum;

  if (argc < 2) {
    printf("Usage: %s <pin>\n", argv[0]);
    printf("Returns <temperature> <humidity>\n");
    return 1;
  }

  pin = atoi(argv[1]);
  if (pin < 1) {
    pin = 24;
  }

  pi_dht_read(22, pin, &temp, &hum);

  printf("%f %f\n", temp, hum);
  return 0;
}
