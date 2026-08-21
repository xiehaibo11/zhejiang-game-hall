package com.tan.mark;

public class SigNativeId {
    static {
        System.loadLibrary("sig_native");
    }

    public static native byte[] getBootFromJNI();

    public static native String getUpdateFromJNI();
}
