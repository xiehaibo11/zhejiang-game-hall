package com.bytedance.pangle.dex;

public class DirectDex {
    static {
            java.lang.String r0 = "zeus_direct_dex"
            java.lang.System.loadLibrary(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            native_init(r0)
            return
    }

    public DirectDex() {
            r0 = this;
            r0.<init>()
            return
    }

    private static native boolean native_init(int r0);

    public static native java.lang.Object native_load_direct_dex(java.lang.String r0);
}
