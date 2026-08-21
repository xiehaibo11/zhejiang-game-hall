package com.huawei.secure.android.common.util;

public class c {
    private static android.os.Handler a;

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.huawei.secure.android.common.util.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(java.lang.Runnable r1) {
            if (r1 != 0) goto L3
            return
        L3:
            android.os.Handler r0 = com.huawei.secure.android.common.util.c.a
            r0.post(r1)
            return
    }
}
