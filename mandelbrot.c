#include <stdio.h>
#include <complex.h>
void main(void) {
    printf("P2\n1000 1000\n255\n");
    for (int y = 0; y < 1000; y++)
        for (int x = 0; x < 1000; x++) {
            double complex z = 0, c = (-2 + 3*x/1000.0) + I*(-1.5 + 3*y/1000.0);
            for (int i = 0; i < 255; i++, z = z*z + c)
                if (cabs(z) > 2.0 || i == 254) {
                    printf("%d ", 255-i);
                    break;
                }
        }
    printf("\n");
}
