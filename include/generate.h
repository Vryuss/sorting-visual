#pragma once
#include "bar.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void populate(std::vector<Bar>& arr, int num){
  int offset = 1080/num;
  int unit = 720/10;
  srand(time(NULL));
  //unit of difference in height
  for (size_t i = 0; i < num; i++) {
    int randNum = (rand() % 5) + 1;
    printf("%d", randNum);

    arr.emplace_back(offset - 5, unit * randNum, offset * i, 720 - (unit*randNum), false);
  }
}
