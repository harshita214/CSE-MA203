#include <stdio.h>
#include <math.h>
#include <conio.h>
#define f(x) 3*x/ pow((4+x),2)

int main(){
    float upper, lower, stepsize,integration,k;
    int i,subInterval;
    
    printf("Enter Upper limit: ");
    scanf("%f", &upper);
    printf("Enter lower limit: ");
    scanf("%f", &lower);
    printf("Enter no of subintervals: ");
    scanf("%d", &subInterval);
    
    stepsize = (upper - lower)/subInterval;
    integration = f(upper) + f(lower);
    
    for(i=1; i<= subInterval-1; i++){
        k = lower + i* stepsize;
        
            integration = integration + 2*f(k);
   
    }
    integration = integration * stepsize/2;
    printf("Output is %.4f" , integration);
}

