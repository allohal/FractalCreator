#ifndef FRACTAL_FRACTALCREATOR_H
#define FRACTAL_FRACTALCREATOR_H

#include <string>
#include <vector>

#include "../Zoom/Zoom.h"
#include "../Bitmap/Bitmap.h"
#include "../Zoom/ZoomList.h"
#include "../RGB/RGB.h"

namespace fractal {

class FractalCreator {
private:
    int m_width;
    int m_height;
    int m_total{0};
    std::unique_ptr<int[]> m_histogram;
    std::unique_ptr<int[]> m_fractal;
    Bitmap m_bitmap;
    ZoomList m_zoomList;

    vector<int> m_ranges;
    vector<RGB> m_colors;
    vector<int> m_rangeTotals;

    bool m_bGotFirstRange{false};

private:
    void calculateIteration();
    void calculateTotalIterations();
    void drawFractal();
    void writeBitmap(string name);

public:
    FractalCreator(int width, int height);
    virtual ~FractalCreator();
    void addZoom(const Zoom &zoom);
    void run(string name);
};

}
#endif //FRACTAL_FRACTALCREATOR_H
