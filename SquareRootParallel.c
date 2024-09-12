/* PROGRAM Parallel version of SquareRoot */
/* Figure 2.1 */
#include <stdlib.h>
#include <math.h>
#define N 10
#define GROUP 5
float a[N+1];
int i;

void print(float[] p, int n) { 
  int j;
  for (j = 1; j <= n; j++)
  {
    cout << "[" << j << " : " << p[j] << "] ";
    if (j % 5 == 0)
      cout << endl;
  }
  if (j % 5 != 1)
    cout << "\n";
} 

void fa(int i)
{
  a[i] = sqrt(a[i]);
}
main() {
  cout.precision(4); /* use 4 significant digits for float output */
  cout << endl;
  for (i = 1; i <= N; i++)
    a[i] = (rand() % 10000)/100.0;
  print(a, N); 
  /* forall i = 1 to N grouping GROUP do   */
  forall i = 1 to N do  
    fa(i);
  cout << endl;
  print(a, N); 
}

