cmake_minimum_required(VERSION 3.8)
project(Fractal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/Bitmap/BitmapFileHeader.h src/Bitmap/BitmapInfoHeader.h src/Bitmap/Bitmap.cpp src/Bitmap/Bitmap.h src/Mandelbrot/Mandelbrot.cpp src/Mandelbrot/Mandelbrot.h src/Zoom/Zoom.h src/Zoom/ZoomList.cpp src/Zoom/ZoomList.h src/Fractal/FractalCreator.cpp src/Fractal/FractalCreator.h src/RGB/RGB.cpp src/RGB/RGB.h)
add_executable(Fractal ${SOURCE_FILES})