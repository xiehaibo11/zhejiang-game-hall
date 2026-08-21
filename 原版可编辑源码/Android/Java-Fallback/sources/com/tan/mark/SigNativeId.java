package com.tan.mark;

public class SigNativeId {
    static {
            java.lang.String r0 = "sig_native"
            java.lang.System.loadLibrary(r0)
            return
    }

    public SigNativeId() {
            r0 = this;
            r0.<init>()
            return
    }

    public static native byte[] getBootFromJNI();

    public static native java.lang.String getUpdateFromJNI();
}
