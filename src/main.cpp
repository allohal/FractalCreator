#include <iostream>

#include "Fractal/FractalCreator.h"

int main() {

    fractal::FractalCreator fractalCreator(800, 600);

    /* Function that zooming picture by screen coordinates */
    fractalCreator.addZoom(fractal::Zoom(295, 202, 0.1));
    fractalCreator.addZoom(fractal::Zoom(312, 304, 0.1));

    fractalCreator.run("fractal.bmp");

    cout << "Finished" << endl;

    return 0;
}