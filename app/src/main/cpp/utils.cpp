#include "utils.hpp"

#include <jni.h>


extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_osslicenseserror_utils_Utils_performSomeAction(
        JNIEnv *pEnv,
        jobject pThis) {
    return jstring("this is it");
}


