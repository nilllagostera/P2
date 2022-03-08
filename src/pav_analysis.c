#include <math.h>
#include "pav_analysis.h"

float compute_power(const float *x, unsigned int N) {
    float sum=1e-12;
    for(unsigned int i=0;i<N;i++){
<<<<<<< HEAD

        sum=sum+x[i]*x[i];
=======
        
        sum = sum + x[i]*x[i]; 
>>>>>>> 1dc67c3a89836236962de28b428fd6bef478a440
    }
    return 10*log10(sum/N);
}

float compute_am(const float *x, unsigned int N) {
<<<<<<< HEAD
    float sum=0;
    for(unsigned int i=0;i<N;i++){
        sum=sum+fabs(x[i]);
=======
    float sum = 0;
    for(unsigned int i=0;i<N;i++){
        sum = sum + fabs(x[i]);
>>>>>>> 1dc67c3a89836236962de28b428fd6bef478a440
    }
    return sum/N;
}

float compute_zcr(const float *x, unsigned int N, float fm) {
<<<<<<< HEAD
    float zcr,sum=0;
    int i;
    for( i=0;i<N;i++){
        if(x[i]*x[i-1]<0){
            sum=sum+1;
        }
    }
    return fm*sum/(2*(N-1));
=======
    float sum = 0;
    for(int i=0;i<N;i++){
        if(x[i]*x[i-1]<0){
            sum = sum + 1;
        }
    }
    return (fm*sum) / (2*(N - 1));
>>>>>>> 1dc67c3a89836236962de28b428fd6bef478a440
}
