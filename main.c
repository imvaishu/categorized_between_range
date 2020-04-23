#include <stdio.h>
#include <stdlib.h>
#include "categorized_range.h"

int main(void)
{
  int numbers[] = {3,1,7,4,6,5,8,2};
  int length = sizeof(numbers) / sizeof(int);
  int start_range = 4;
  int end_range = 7;

  Categorized_range *categorized_range = separate_numbers_in_range(numbers,length,start_range,end_range);
  for(int index = 0 ; index < 3 ; index++){
    for(int j = 0 ; j < categorized_range[index].length ; j++){
      printf("%d\n",categorized_range[index].categorized_ranges[j]);
    }
      printf("\n");
  }
  return 0;
}