#include <stdlib.h>
#include <math.h>

int main(){
    float a = 123.0;
    int b = 0;
    while (a > 0.9){
        a = a/10;
        b++;
    }
    cout<<b;
    
    
}