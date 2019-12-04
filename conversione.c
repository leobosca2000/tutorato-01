#include <stdio.h>

#define LOWER 20
#define UPPER 300
#define STEP 20
int main(void)
{
    float farh;
    float celsius;
    
    farh=20;
    
    while (farh<=300) {
        celsius=(5.0/9.0)*(farh-32); 
        printf("F=%f\tC=%f\n" ,farh, celsius);
        farh=farh+20;
        }
}
