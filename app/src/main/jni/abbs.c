#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_as3_1jni_1study_As3JNI_stringJNIstr(JNIEnv *env, jclass type) {

    // TODO


    return (*env)->NewStringUTF(env, "jajaj");
}