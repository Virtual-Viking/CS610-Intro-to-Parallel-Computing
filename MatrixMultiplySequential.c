/* PROGRAM MatrixMultiplySequential */ 
#include <stdlib.h>
#include <math.h>
#define M 4
#define N 4
#define P 4
float A[M+1][N+1], B[N+1][P+1];
float C[M+1][P+1]; 

float VectorProduct(int rw, int cl) {
  float sum;
  int k;
  sum = 0.0;
  for (k = 1; k <= N; ++k)
  {
    sum = sum + A[rw][k] * B[k][cl];
  }
  /*
  C[rw][cl] = sum;
  */
  return sum;
}

void printMatrix(float p[N+1][N+1]) {
  int l, m;
  for (l = 1; l <= N; l++) {
    for (m = 1; m <= N; m++) 
      cout << p[l][m] << " ";
    cout << "\n";
  }
  cout << "\n";
}

int i, j; 
int main() {
  cout.precision(8); /* use 8 significant digits for float output */
  for (i = 1; i <= N; i++)
    for (j = 1; j <= N; j++) {
      a[i][j] = (rand() % 10000)/100.0;
      b[i][j] = (rand() % 10000)/100.0;
    }
    
  for (i = 1; i <= N; i++)
    for (j = 1; j <= N; j++) 
      /*compute row i of A times column j of B*/
      C[i][j] = VectorProduct(i, j);
  
  cout << "A = " << "\n";
  printMatrix(A);
  cout << "\n"; 
  
  cout << "B = " << "\n"; 
  printMatrix(B); 
  cout << "\n"; 
  
  cout << "C = " << "\n";  
  printMatrix(C);
  cout << "\n"; 
  return 0;
}
