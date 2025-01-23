#include <stdio.h>

double mx_pow(double n, unsigned int pow){
    if (pow == 0){
        return 1;
    }
    double N = n;
    for (unsigned int i = 0; i < pow - 1; i++){
        N *= n;
    }
    return N;
}

int main(){
    printf("%f",mx_pow(2.5,0));
}
