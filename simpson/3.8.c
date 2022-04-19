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
        if(i%3 == 0){
            integration = integration + 2*f(k);
        }
        else{
            integration = integration + 3*f(k);
        }
    }
    integration = integration * stepsize*3/8;
    printf("Output is %.4f" , integration);
}

