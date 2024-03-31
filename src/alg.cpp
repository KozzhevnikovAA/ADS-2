// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t a) {
if (a == 0) {
return 1;
} else if (value == 0) {
return 0;
} else {
return value * pown(value, a - 1);
}
}

uint64_t fact(uint16_t a) {
uint16_t count = 1;
if (a == 0) {
return 1;
} else {
return a * fact(a - 1);
}
}

double calcItem(double b, uint16_t a) {
double result = pown(b, a) / fact(a);
return result;
}

double expn(double b, uint16_t count) {
uint16_t i;
double schet = 0;
for (i = 0; i <= count; i++) {
schet += calcItem(b, i);
}
return schet;
  
}

double sinn(double b, uint16_t count) {
uint16_t k;
double schet = 0;
for (k = 1; k <= count; k++) {
schet += pown(-1, k - 1) * calcItem(b, 2 * k - 1);
}
return schet;
}

double cosn(double b, uint16_t count) {
uint16_t k;
double schet = 0;
for (k = 1; k <= count; k++) {
schet += pown(-1, k - 1) * calcItem(b, 2 * k - 2);
}
return schet;
}
