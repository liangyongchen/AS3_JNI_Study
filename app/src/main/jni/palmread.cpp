#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_as3_1jni_1study_As3JNI_stringJNIstr(JNIEnv *env, jclass type) {

    // TODO

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
