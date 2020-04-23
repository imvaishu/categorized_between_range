#ifndef __CATEGORIZED_RANGE_H_
#define __CATEGORIZED_RANGE_H_

typedef int *int_ptr;
typedef int *arrays;
typedef int INDEX;

typedef struct
{
  arrays categorized_ranges;
  int length;
} Categorized_range;

typedef enum
{
  below_range,
  in_range,
  above_range,
} Ranges;

#define FOR(start,limit) for(int i = start ; i < limit ; i++);

Categorized_range *create_categorized_array(int_ptr numbers,int length);

Categorized_range *separate_numbers_in_range(int_ptr numbers,int length,int start_range,int end_range);

#endif