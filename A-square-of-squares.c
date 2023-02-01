#include <stdbool.h>
#include <math.h>

bool is_square(int n) {
  int result;
  
  result = sqrt(n);
  if (n == result * result)
      return true;
  else
    return false;
}
