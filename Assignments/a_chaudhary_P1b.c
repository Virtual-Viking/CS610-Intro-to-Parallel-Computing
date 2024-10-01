#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    cout<<"PLease enter a number to calculate factorial.  ";
    cin>>n;
    float a = 1;
    float i = 1;

    /* calculating factorial of n  */

    for (i = 1; i<=n; i++){
        a = a*i;
    }

    /* setting floating point variable precision*/
    float c = a;
    int b = 0;
    while (c>0.9){
        c = c/10;
        b++;
    }
    cout.precision(b);
    cout<<a;
}