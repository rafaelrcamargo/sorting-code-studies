#include <stdio.h>

// * Macros
#define length(x) (sizeof(x) / sizeof((x)[0]))

// * Functions
int main()
{
  // ? Counter
  int counter = 0;

  // ? Main array
  int arr[] = {2, 3, 4, 1, 5};

  // * Initial log
  printf("> In:  ");
  for (int i = 0; i < length(arr); ++i)
  {
    printf("%i ", arr[i]);
  }

  // ? Main loop
  for (int i = 0; i < length(arr); ++i)
  {
    for (int ii = 0; ii < length(arr); ++ii)
    {
      if (arr[i] < arr[ii])
      {
        int O = arr[i];
        int N = arr[ii];

        arr[i] = N;
        arr[ii] = O;
        ++counter;
      }
    }
  }

  // * Final log
  printf("\n> Out: ");
  for (int i = 0; i < length(arr); ++i)
  {
    printf("%i ", arr[i]);
  }
  printf("\n>> Iterations: %i", counter);

  // ? Static return
  return 0;
}