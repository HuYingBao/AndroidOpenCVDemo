#include <jni.h>
#include <string>
#include "opencv2/opencv.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include "vlfeat/kdtree.h"

extern "C"
JNIEXPORT jstring JNICALL

Java_indoor_sysu_mobile_limk_opencvtest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    char hello[100] = {"Hello from JNI"};
    cv::Mat mat = cv::imread("/sdcard/yuwenwenn.jpg", CV_LOAD_IMAGE_GRAYSCALE);

    cv::SurfFeatureDetector detector;
    std::vector<cv::KeyPoint> keypoints;
    detector.detect(mat, keypoints);

    char spec[20] = {};
    sprintf(spec, ", image size: %d x %d\nSurf keypoints: %d",
            mat.rows, mat.cols, keypoints.size());
    strcat(hello, spec);

    VlKDForest *forest;

    return env->NewStringUTF(hello);
}
