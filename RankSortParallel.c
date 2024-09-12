/* PROGRAM RankSortParallel */
/* Figure 2.3 */
#include <stdlib.h>
#define N 100
int values[N+1], final[N+1];
int i;

void putinPlace( int src ) {
  int testval, j, rank;

  testval = values[src];
  j = src;   /* j moves through the whole array */
  rank = 1;  /* position of the first number in the arrays */
  do {
    j = j % N + 1; /* j moves to the next circular position */
    if (testval > values[j] ||
       (testval == values[j] && src > j)) 
       rank = rank + 1;
  } while (j != src);
  final[rank] = testval;  /*put into position*/
}

void initialize() {
  int i;
  for (i = 1; i <= N; i++)
    values[i] = rand() % 100;  /* initialize values */
    /* cin >> values[i]; */    /* if to initialize with input values */
}

void display(int val[]) {
  int i;
  for (i = 1; i <= N; i++) {
    cout << val[i] << " "; 
    if (i % 10 == 0)
      cout << endl;
  }
  if (i % 10 != 1)
    cout << endl;
}

main() {
  initialize();
  /* display(values); */
  forall  i = 1 to N grouping 10 do
    putinPlace(i);  /* put values[i] in place */
  /* display(final); */
}
