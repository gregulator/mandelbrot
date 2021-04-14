# Mandelbrot In 15 lines of C

![The Mandelbrot Set](mandelbrot.png)

This program renders the Mandelbrot Set in just 15 lines of C code.

On many linux systems, you can compile, run and convert to a PNG file with this
command:

```
gcc -std=c99 mandelbrot.c -lm -o mandelbrot && ./mandelbrot | convert - mandelbrot.png
```
