#include <stdlib.h>
#include "categorized_range.h"

Categorized_range *create_dynamic_array(int_ptr numbers,int length)
{
  Categorized_range *array = malloc(sizeof(Categorized_range));
  array->length = length;
  array->categorized_ranges = malloc(sizeof(int) * length);
  for(int index=0;index<length;index++)
  {
    array->categorized_ranges[index] = numbers[index];
  }
  return array;
}

Categorized_range *separate_numbers_in_range(int_ptr numbers,int length,int start_range,int end_range)
{
  int temp_arrays[3][length];
  Ranges range;
  int lengths[3] = {0,0,0};
  
  for(int index=0;index<length;index++)
  {
     range = numbers[index] < start_range ? below_range : numbers[index] > end_range ? above_range : in_range;
     temp_arrays[range][lengths[range]] = numbers[index];
     lengths[range]++;
    }

  Categorized_range *categorized_ranges = malloc(sizeof(Categorized_range) * 3);

  for(int index = 0;index < 3 ; index++)
  {
    categorized_ranges[index] = *create_dynamic_array(temp_arrays[index],lengths[index]);
  }
  return categorized_ranges;
}