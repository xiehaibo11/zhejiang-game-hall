package com.bianfeng.libuniverse;

public class Helper {
    public Helper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getWritablePath() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            java.io.File r0 = r0.getFilesDir()
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    public static native void nativeSetContext(android.content.Context r0, android.content.res.AssetManager r1);
}
