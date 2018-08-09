#ifndef FRACTAL_RGB_H
#define FRACTAL_RGB_H

namespace fractal {

struct RGB {
    double r;
    double g;
    double b;

    RGB(double r, double g, double b);
};

RGB operator-(const RGB &first, const RGB &second);

}
#endif //FRACTAL_RGB_H
