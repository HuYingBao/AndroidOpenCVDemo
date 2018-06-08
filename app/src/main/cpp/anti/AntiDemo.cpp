//
// Created by liujunfeng on 2018/6/8.
//
#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_jiangdg_opencv4android_live_LiveHelper_sayHello(JNIEnv *env, jobject instance) {
    return env->NewStringUTF("Hello anti");
}
