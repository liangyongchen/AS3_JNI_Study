package com.example.as3_jni_study;

/**
 * Created by 河马安卓 on 2018/3/15.
 */

public class As3JNI {

    static {
        System.loadLibrary("abbs");
    }


    public static native String stringJNIstr();

}
