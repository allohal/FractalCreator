#ifndef FRACTAL_MANDELBROT_H
#define FRACTAL_MANDELBROT_H

namespace fractal {

class Mandelbrot {
public:
    static const int MAX_ITERATIONS = 1000;

public:
    Mandelbrot();
    static int getIterations(double x, double y);
    virtual ~Mandelbrot();
};

}
#endif //FRACTAL_MANDELBROT_H
