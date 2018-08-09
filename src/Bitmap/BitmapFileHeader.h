#ifndef FRACTAL_BITMAPFILEHEADER_H
#define FRACTAL_BITMAPFILEHEADER_H

#include <cstdint>

using namespace std;

#pragma pack(2)

namespace fractal {

    struct BitmapFileHeader {
        char header[2]{'B', 'M'};
        int32_t fileSize;
        int32_t reserved{0};
        int32_t dataOffSet;

    };

}

#endif //FRACTAL_BITMAPFILEHEADER_H
