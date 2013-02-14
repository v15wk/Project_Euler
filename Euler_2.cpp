#include <stdio.h>
#include <math.h>

int main()
{
    float f1 = -1.0;
    float f2 = 1.0;
	float f3 = 0.0;
	float i;
    float sum = 0.0;
	for (i=1; f3<4000000; i++){
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
		if (fmod(f3,2.0) == 0.0)
    	    sum = sum + f3;       
        }
    printf("%f ",sum);
    return 0;
}