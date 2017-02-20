QT += core
QT -= gui

TARGET = CropImage
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

INCLUDEPATH += C:\ReleaseBuilds\OpenCV3.1.0Release\OpenCV\include\

LIBS += -LC:\ReleaseBuilds\OpenCV3.1.0Release\build\bin\
    libopencv_calib3d310\
    libopencv_core310\
    libopencv_features2d310\
    libopencv_flann310\
    libopencv_highgui310\
    libopencv_imgcodecs310\
    libopencv_imgproc310\
    libopencv_ml310\
    libopencv_objdetect310\
    libopencv_photo310\
    libopencv_shape310\
    libopencv_stitching310\
    libopencv_superres310\
    libopencv_video310\
    libopencv_videoio310\
    libopencv_videostab310\

