#include <stdbool.h>

// input is a null-terminated string

bool isValidWalk(const char *walk) {
    int i;
    char loc[] = {0,0};
    i = 0;
  
    while (walk[i])
      i++;
    if (i != 10)
      return false;
    i = 0;
  
    while (walk[i])
      {
        if (walk[i] == 'n')
          loc[0]++;
        else if (walk[i] =='s')
          loc[0]--;
        else if (walk[i] == 'e')
          loc[1]++;
        else if (walk[i] == 'w')
          loc[1]--;
        i++;
      }
    if (loc[0] == 0 && loc[1] == 0)
      return true;
    else
      return false;
}